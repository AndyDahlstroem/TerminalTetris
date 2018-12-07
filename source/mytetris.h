// system includes
#include <ncurses.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

// global constans
const char cBlock = (char)0x2588;
#define QUIT 99
#define LEFT 97
#define RIGHT 100
#define UP 119
#define DOWN 115
#define RLEFT 113
#define RRIGHT 101
#define NO_OF_LEVELS 100

// global structs
// game tick
typedef struct gametick{
	int prevNow;
	int current;
	int tick;
	int setpoint;
}gametick_t;
// gameflags
typedef struct gameflags{
	int topDown;
	int downUp;
	int leftRight;
	int rightLeft;
	int leftFrame;
	int rightFrame;
	int crash;
}gameflags_s;

enum gameStates {PRESS_KEY, GAME_RUN, GAME_OVER, PLAY_AGAIN, FORCE_EXIT};

// globals
int gScore = 0;
int gLevel = 1;
int gRow, gPrevRow = 15;
int gCol, gPrevCol = 5;
int gRot, gPrevRot = 0;
int gQuit = 0;
int gFetched = -1;
int gPrevFetched = -1;
int gLimits = 0;
int gNewShape = -1;
int gLines = 0;
clock_t gNow;
int gNowMs = 0;
gametick_t gGameTick = {-1, 0, 0, 1000};
gameflags_s gFlags = {0, 0, 0, 0, 0};
int gLevels[NO_OF_LEVELS];

// common function declarations
void waitFor(int msecs);
void getKeyboard();
int modulo(int x, int N);
int getNewShape(int max);
int getScore(int level, int lines);
void initLevels(int levels[NO_OF_LEVELS]);
int getLevel(int lines);
int getTick(int level, int levels[NO_OF_LEVELS]);

// game includes: tetris -> field -> shapes
#include "intro.h"
#include "tetris.h"

// common functions
void waitFor(int msecs)
{
	useconds_t waitTime = msecs * 1000;
	usleep(waitTime);
}

void getKeyboard()
{
	int input = getch();

	// handle user input
	if(input != -1){
		gFetched = input;
	}
	else{
		gFetched = -1;
		gPrevFetched = -1;
	}

	// move accordingly
	if(gFetched == LEFT && gPrevFetched != LEFT){
		if(/*gCol > 0 && */gFlags.leftRight == 0 && gFlags.leftFrame == 0){
			gCol--;
		}
	}
	else if(gFetched == RLEFT && gPrevFetched != RLEFT){
		gRot--;
	}
	else if(gFetched == RRIGHT && gPrevFetched != RRIGHT){
		gRot++;
	}
	else if(gFetched == RIGHT && gPrevFetched != RIGHT/* && gCol < FLD_SIZE_COL*/){
		if(gFlags.rightLeft == 0 && gFlags.rightFrame == 0){
			gCol++;
		}
	}
	else if(gFetched == UP && gPrevFetched != UP && gRow > 0){
		// do nothing yet
	}
	else if(gFetched == DOWN && gPrevFetched != DOWN && gRow/* < FLD_SIZE_LIN*/){
		if(gFlags.topDown == 0){
			gRow++;
		}
	}
	gPrevFetched = gFetched;


	// handle rotation
	gRot = modulo(gRot, 4);
}

int modulo(int x, int N){
	return(x % N + N) % N;
}

int getNewShape(int max)
{
	int newShape = rand();
	return modulo(newShape, max);
}

int getScore(int level, int lines)
{
	// lines constant * level
	// 1 line = 4
	// 2 lines = 10
	// 3 lines = 30
	// 4 lines = 120

	if(lines == 1){
		return 4 * level;
	}
	else if(lines == 2){
		return 10 * level;
	}
	else if(lines == 3){
		return 30 * level;
	}
	else if(lines == 4){
		return 120 * level;
	}
	else return 0;
}

void initLevels(int levels[NO_OF_LEVELS])
{
	// starting tick
	double tick = 1000;
	// adjustment each level
	double adj = 0.9;

	// set first level
	levels[0] = (int)tick;

	// the rest
	for(int i = 1; i <= NO_OF_LEVELS; i++){
		tick = tick * adj;
		levels[i] = (int)tick;
	}
}

int getLevel(int lines)
{
	return lines / 5 + 1;
}

int getTick(int level, int levels[NO_OF_LEVELS])
{
	return levels[level - 1];
}