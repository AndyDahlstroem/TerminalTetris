#include "mytetris.h"
#define SHAPES 7

// common function declarations
void gameTick(gametick_t* thisGameTick, int nowMs);
void initGameTick(gametick_t* thisGameTick);

int main()
{
//************************************************
//* setup curses
//************************************************

	LINES = 300;
	COLS = 100;

	initscr();				// start curses mode
	cbreak();				//
	noecho();				// dont echo while we do getch
	nodelay(stdscr, TRUE);	// makes getch() non blocking		
	start_color();			// use colors
	use_default_colors();
	
	// init colors
 	init_color(COLOR_RED, 700, 0 ,0);
	init_color(COLOR_BLUE, 0, 0, 700);

	// colorpairs
	init_pair(1, COLOR_BLACK, COLOR_RED);
	init_pair(2, COLOR_BLACK, COLOR_BLUE);
	init_pair(3, COLOR_BLACK, COLOR_GREEN);
	init_pair(4, COLOR_BLACK, COLOR_YELLOW);
	init_pair(5, COLOR_BLACK, COLOR_MAGENTA);
	init_pair(6, COLOR_BLACK, COLOR_CYAN);
	init_pair(7, COLOR_BLACK, COLOR_WHITE);

	if(has_colors() == FALSE){
		endwin();
		return -1;
	}

//************************************************
//* create shapes
//************************************************

	shape_t *myShapes[SHAPES];

	for(int i = 0; i < SHAPES; i++){
		myShapes[i] = malloc(sizeof(shape_t));
		if(!myShapes[i]) return -1;
	}

	makeShape_0(myShapes[0]);
	makeShape_1(myShapes[1]);
	makeShape_2(myShapes[2]);
	makeShape_3(myShapes[3]);
	makeShape_4(myShapes[4]);
	makeShape_5(myShapes[5]);
	makeShape_6(myShapes[6]);

//************************************************
//* create fields and tetris object and levels
//************************************************	

	int playField[FLD_DEF_LIN][FLD_DEF_COL];
	int blockField[FLD_DEF_LIN][FLD_DEF_COL];

	tetris_t myTetris;

	initField(playField);
	initField(blockField);
	initLevels(gLevels);

//************************************************
//* game globals
//************************************************

	int gameOn = 1;
	enum gameStates thisGame = PRESS_KEY;
	int sec2 = 0;
	int refreshMe = 0;

//************************************************
//* intro
//************************************************

	intro();

//************************************************
//* main game loop
//************************************************

	while(gameOn){
	
		switch(thisGame){
			
			// wait for user to request start or exit
			//********************************************
			case PRESS_KEY:		

				gFetched = -1;
	
				while(gFetched != DOWN && gFetched != QUIT){

					// handle user input
					getKeyboard();
					gNow = clock();
					gNowMs = gNow / 1000;
					sec2 = modulo(gNowMs, 1000);

					// toggle "press key to start back and forth"
					if(sec2 > 500 && refreshMe == 0){
						updateAll(playField, blockField);
						pressKeyToStart();
						refreshMe = 1;
					}
					else if(sec2 < 500 && refreshMe != 0){
						updateAll(playField, blockField);
						refreshMe = 0;
					}
				}

				// start game if DOWN whas pressed
				if(gFetched == DOWN){
					updateAll(playField, blockField);
					thisGame = GAME_RUN;
				}
				// otherwise exit
				else{
					thisGame = FORCE_EXIT;
				}

				break;

			// run game
			//********************************************
			case GAME_RUN:

				// prepare this game
				gRow = gPrevRow = 0;
				gCol = gPrevCol = 5;
				gScore = 0;
				gLines = 0;
				gLevel = 1;
				initTetris(&myTetris);
				initField(playField);
				initField(blockField);
				initGameTick(&gGameTick);
				gNewShape = getNewShape(SHAPES);
				gFetched = -1;

				while(gFetched != QUIT && gFlags.crash == 0){

					// handle levels
					gLevel = getLevel(gLines);
					gGameTick.setpoint = getTick(gLevel, gLevels);

					// update time, fetch user inputs and create game flags
					gNow = clock();
					gNowMs = gNow / 1000;
					gameTick(&gGameTick, gNowMs);
					gLimits = compareFields(playField, blockField);
					getKeyboard();

					// update game if user input
					if(gPrevCol != gCol || gPrevRow != gRow || gPrevRot != gRot && gGameTick.tick == 0){
						gPrevCol = gCol;
						gPrevRow = gRow;
						gPrevRot = gRot;
						incomingTetris(&myTetris, myShapes[gNewShape], 0);
						initField(blockField);
						tetrisToField(&myTetris, blockField);
						updateAll(playField, blockField);
					}
					// else on game tick
					else if(gGameTick.tick != 0){

						// if vertical contact, leave tetris to playfield
						if(gFlags.topDown != 0){
							tetrisToField(&myTetris, playField);
							gLines = gLines + detectLines(playField);
							incomingTetris(&myTetris, myShapes[gNewShape], 1);
							gNewShape = getNewShape(SHAPES);
							gRow = gPrevRow = 0;
							gCol = gPrevCol = 5;
							gGameTick.tick = 0;
							initField(blockField);
							updateAll(playField, blockField);
						}
						
						// else just move tetris down on line
						else{
							gRow = gRow + gGameTick.tick;
							gPrevRow = gRow;
							gGameTick.tick = 0;
							incomingTetris(&myTetris, myShapes[gNewShape], 0);
							initField(blockField);
							tetrisToField(&myTetris, blockField);
							updateAll(playField, blockField);
						}
					}
				}

				if(gFetched == QUIT){					
					thisGame = PLAY_AGAIN;
				}
				else if(gFlags.crash > 0){
					thisGame = FORCE_EXIT;
				}

				break;

			// play again?
			//********************************************
			case PLAY_AGAIN:

				printGameOver(1);

				gFetched = -1;
				while(gFetched != QUIT && gFetched != DOWN){
					getKeyboard();
				}

				if(gFetched == DOWN){
					thisGame = GAME_RUN;
				}
				else if(gFetched == QUIT){
					thisGame = FORCE_EXIT;
				}

				break;

			// FORCE EXIT
			//********************************************
			case FORCE_EXIT:

				gameOn = 0;

				break;
		}
	}

//************************************************
//* destroy shapes and exit game
//************************************************

	endwin();

	for(int i = 0; i < SHAPES; ++i){
    	free(myShapes[i]);
	}

	return 0;
}

// common functions implementation
void gameTick(gametick_t* thisGameTick, int nowMs)
{
	// first call
	if(thisGameTick->prevNow == -1){
		thisGameTick->prevNow = nowMs;
		return;
	}

	thisGameTick->current = thisGameTick->current + nowMs - thisGameTick->prevNow;
	if(thisGameTick->current > thisGameTick->setpoint){
		thisGameTick->current = thisGameTick->current - thisGameTick->setpoint;
		thisGameTick->tick++;
	}
	thisGameTick->prevNow = nowMs;
}

void initGameTick(gametick_t* thisGameTick){
	thisGameTick->prevNow = -1;
}