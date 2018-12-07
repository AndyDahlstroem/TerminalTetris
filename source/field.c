// implementation of field

void initField(int field[FLD_DEF_LIN][FLD_DEF_COL])
{
	int lin, col;
	for(lin = 0; lin < FLD_DEF_LIN; lin++){
		for(col = 0; col < FLD_DEF_COL; col++){
			field[lin][col] = 0;
		}
	}
}

void insertBlock(int field[FLD_DEF_LIN][FLD_DEF_COL], int line, int col)
{

	if(line >= 0 && line <= FLD_SIZE_LIN && col >= 0 && col <= FLD_SIZE_COL){
		field[line][col] = cBlock;
	}
}

void makeField(int field[FLD_DEF_LIN][FLD_DEF_COL], int clear)
{
	int lin, col = 0;

	if(clear != 0) clear();
	
	// print passed field
	for(lin = FLD_VIZ_STRT; lin <= FLD_SIZE_LIN; lin++){
		for(col = 0; col <= FLD_SIZE_COL; col++){

			if(field[lin][col] == 0){
				move(lin + FLD_START_LIN, col * 2 + FLD_START_COL + 1);
			}
			
			else if(field[lin][col] == 1){
				attron(COLOR_PAIR(1));
				mvaddch(lin + FLD_START_LIN, col * 2 + FLD_START_COL, ' ');
				addch(' ');
				attroff(COLOR_PAIR(1));
			}

			else if(field[lin][col] == 2){
				attron(COLOR_PAIR(2));
				mvaddch(lin + FLD_START_LIN, col * 2 + FLD_START_COL, ' ');
				addch(' ');
				attroff(COLOR_PAIR(2));
			}

			else if(field[lin][col] == 3){
				attron(COLOR_PAIR(3));
				mvaddch(lin + FLD_START_LIN, col * 2 + FLD_START_COL, ' ');
				addch(' ');
				attroff(COLOR_PAIR(3));
			}

			else if(field[lin][col] == 4){
				attron(COLOR_PAIR(4));
				mvaddch(lin + FLD_START_LIN, col * 2 + FLD_START_COL, ' ');
				addch(' ');
				attroff(COLOR_PAIR(4));
			}

			else if(field[lin][col] == 5){
				attron(COLOR_PAIR(5));
				mvaddch(lin + FLD_START_LIN, col * 2 + FLD_START_COL, ' ');
				addch(' ');
				attroff(COLOR_PAIR(5));
			}

			else if(field[lin][col] == 6){
				attron(COLOR_PAIR(6));
				mvaddch(lin + FLD_START_LIN, col * 2 + FLD_START_COL, ' ');
				addch(' ');
				attroff(COLOR_PAIR(6));
			}

			else if(field[lin][col] == 7){
				attron(COLOR_PAIR(7));
				mvaddch(lin + FLD_START_LIN, col * 2 + FLD_START_COL, ' ');
				addch(' ');
				attroff(COLOR_PAIR(7));
			}

			else{				
				mvaddch(lin + FLD_START_LIN, col * 2 + FLD_START_COL, cBlock);
				addch(cBlock);					
			}
		}
	}
	refresh();
}

void makeFrame(char type)
{
	int i = 0;
	int lin = FLD_START_LIN + FLD_VIZ_STRT - 1;
	int col = FLD_START_COL - 2;

	move(lin, col);

	attron(COLOR_PAIR(7));

	//print top row
	for(i = 0; i < FLD_SIZE_COL * 2 + 6; i++){
		addch(' ');
	}

	// print side lines
	for(i = 0; i <= FLD_SIZE_LIN - FLD_VIZ_STRT; i++){
		move(lin, col);
		addch(' ');
		addch(' ');
		move(lin, col + FLD_SIZE_COL * 2 + 4);
		addch(' ');
		addch(' ');
		lin++;
	}

	// print bottom line
	move(lin, col);
	for(i = 0; i < FLD_SIZE_COL * 2 + 6; i++){
		addch(' ');
	}
	refresh();
	curs_set(0);
	attroff(COLOR_PAIR(7));
}

void makeScoreBoard()
{
	int i = 0;

	// set cursor to same line as top of well and 2 char right
	int lin = FLD_START_LIN + FLD_VIZ_STRT - 1;
	int col = FLD_START_COL + FLD_SIZE_COL * 2 + 6;
	move(lin++, col);

	// print top row
	for(i = 0; i < BRD_SIZE_COL; i++){
		addch('*');
	}

	// print lines
	move(lin++, col);
	printw("*  TerminalTetris v1.0  *");
	move(lin++, col);
	printw("*                       *");
	move(lin++, col);
	printw("*    move left: a       *");
	move(lin++, col);
	printw("*    move right: d      *");
	move(lin++, col);
	printw("*    move down: s       *");
	move(lin++, col);
	printw("*    rotate left: q     *");
	move(lin++, col);
	printw("*    rotate right: e    *");
	move(lin++, col);
	printw("*    insta quit: c      *");
	move(lin++, col);
	printw("*                       *");
	move(lin++, col);
	printw("*    score: %04d        *", gScore);
	move(lin++, col);
	printw("*    level: %02d          *", gLevel);
	move(lin++, col);
	printw("*    lines: %03d         *", gLines);
	move(lin++, col);
	printw("*                       *");
	move(lin++, col);
	printw("*                       *");
	move(lin++, col);
	printw("*                       *");
	move(lin++, col);
	printw("* scoring nintendo-ish  *");
	move(lin++, col);
	printw("* 4-rows ftw!           *");
	move(lin++, col);
	printw("*                       *");
	move(lin++, col);
	printw("*                       *");
	move(lin++, col);
	printw("*                       *");
	move(lin++, col);
	printw("* >malan for president< *");
	move(lin++, col);
	// print bottom row
	for(i = 0; i < BRD_SIZE_COL; i++){
		addch('*');
	}
}

int compareFields(int playField[FLD_DEF_LIN][FLD_DEF_COL], int blockField[FLD_DEF_LIN][FLD_DEF_COL])
{
	// one or more flags is raised
	int event = 0;

	// detect crash, block found in same spot or block found above line 20
	gFlags.crash = 0;
	for(int y = 0; y < FLD_SIZE_LIN; y++){
		for(int x = 0; x < FLD_SIZE_COL; x++){
			if(playField[y][x] != 0 && y < 3){
				gFlags.crash++;
				event++;
			}
			else if(playField[y][x] != 0 && blockField[y][x] != 0){
				gFlags.crash++;
				event++;
			}			
		}
	}

	// topdown, block found in blockField one line above playField or bottom of playfield
	// figure why +1 was needed!
	gFlags.topDown = 0;
	for(int y = 1; y < FLD_SIZE_LIN; y++){
		for(int x = 0; x < FLD_SIZE_COL + 1; x++){
			if(playField[y][x] != 0 && blockField[y - 1][x] != 0){
				gFlags.topDown++;
				event++;
			}
			else if(y == FLD_SIZE_LIN - 1 && blockField[y][x] != 0){
				gFlags.topDown++;
				event++;
			}
		}
	}

	// leftright, block found in blockField one column right of playField
	gFlags.leftRight = 0;	
	for(int y = 0; y < FLD_SIZE_LIN; y++){
		for(int x = 0; x < FLD_SIZE_COL - 1; x++){
			if(playField[y][x] != 0 && blockField[y][x + 1] != 0){
				gFlags.leftRight++;
				event++;
			}
		}
	}

	// rightleft, block found in blockField one column left of playField
	gFlags.rightLeft = 0;	
	for(int y = 0; y < FLD_SIZE_LIN; y++){
		for(int x = 1; x < FLD_SIZE_COL; x++){
			if(playField[y][x] != 0 && blockField[y][x - 1] != 0){
				gFlags.rightLeft++;
				event++;
			}
		}
	}

	// leftframe, block found in blockField one column right of left frame side
	gFlags.leftFrame = 0;	
	for(int y = 0; y < FLD_SIZE_LIN; y++){
		if(blockField[y][0] != 0){
			gFlags.leftFrame++;
			event++;
		}				
	}

	// rightframe, block found in blockField one column left of right frame side
	gFlags.rightFrame = 0;		
	for(int y = 0; y < FLD_SIZE_LIN; y++){
		if(blockField[y][FLD_SIZE_COL] != 0){
			gFlags.rightFrame++;
			event++;
		}	
	}

	// return number of raised flags
	return event;
}

int detectLines(int field[FLD_DEF_LIN][FLD_DEF_COL])
{
	int lines = 0;
	for(int y = 0; y < FLD_SIZE_LIN; y++){
		for(int x = 0; x < FLD_SIZE_COL; x++){
			// next line if gap is found
			if(field[y][x] == 0){
				break;
			}
			// if end of line reached, update lines
			if(x == FLD_SIZE_COL - 1){
				lines++;
				removeLine(y, field);
			}
		}
	}
	gScore = gScore + getScore(gLevel, lines);
	return lines;
}

void removeLine(int line, int field[FLD_DEF_LIN][FLD_DEF_COL])
{
	// delete line
	for(int x = 0; x <= FLD_SIZE_COL; x++){
		field[line][x] = 0;
	}

	// shift down lines above deleted line
	for(int y = line - 1; y > 0; y--){
		for(int x = 0; x <= FLD_SIZE_COL; x++){
			field[y + 1][x] = field[y][x];
		}
	}
}

void updateAll(int playField[FLD_DEF_LIN][FLD_DEF_COL], int blockField[FLD_DEF_LIN][FLD_DEF_COL])
{
	makeField(playField, 1);
	makeField(blockField, 0);
	makeFrame(cBlock);
	makeScoreBoard();
}

void pressKeyToStart()
{
	move(FLD_START_LIN + 12, FLD_START_COL + 2);
	printw("press s to start");
	refresh();
}

void printGameOver(int level)
{
	if(level == 1){
		move(FLD_START_LIN + 12, FLD_START_COL + 5);
		printw("GAME OVER!");
		move(FLD_START_LIN + 14, FLD_START_COL + 3);
		printw("press s to try");
		move(FLD_START_LIN + 15, FLD_START_COL + 7);
		printw("again");
	}
	else{
		move(FLD_START_LIN + 12, FLD_START_COL + 6);
		printw("GAME OVER");
	}
}