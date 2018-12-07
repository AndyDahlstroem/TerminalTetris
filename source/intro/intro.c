#include <ncurses.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

void waitFor(int msecs);
void typeWriter(char* message, int line);
void typeWriterExt(int preBlink, char* message, int col, int line, int postBlink, int delay);
void cursorBlink(int times);

int main()
{
	LINES = 300;
	COLS = 100;

	initscr();				// start curses mode
	cbreak();				//
	noecho();				// dont echo while we do getch
	nodelay(stdscr, TRUE);	// makes getch() non blocking

	// variables
	int counter = 0;
	int input = 0;
	int fetched = 0;
	int cRow = 0;
	int cCol = 0;
	int prevFetched = 0;
	char mess1[] = "This is my final project for CS50x";
	char mess2[] = "This is it...";
	char mess3[] = "its done!";
	char mess4[] = "This is a C implementation of the good old Tetris game";
	char mess5[] = "Using curses to show the game in a terminal window";
	char mess6[] = "Source code is found on GitHub, user: ";
	char mess7[] = "AndyDahlstroem";
	char mess8[] = "CS50 is really something. Special thanks to the staff";
	char mess9[] = "Andy Dahlstroem, SE, 2018/12/14. ";
	char messA[] = "Signing off...";
	char messB[] = "now";

	// initial blink
	cursorBlink(2);

//void typeWriter(char* message, int line);
//void typeWriterExt(int preBlink, char* message, int col, int line, int postBlink, int delay);
/*
	// message line 1
	typeWriterExt(1, mess1, 5, 5, 3, 100);
	typeWriterExt(1, mess2, 5, 7, 1, 200);
	typeWriterExt(0, mess3, 19, 7, 4, 50);
	typeWriterExt(1, mess4, 5, 8, 3, 100);
	typeWriterExt(1, mess5, 5, 9, 3, 100);	
	typeWriterExt(1, mess6, 5, 10, 1, 100);
	typeWriterExt(0, mess7, 43, 10, 5, 75);
	typeWriterExt(0, mess8, 5, 12, 3, 100);	
*/	
	typeWriterExt(1, mess9, 5, 14, 1, 100);
	typeWriterExt(0, messA, 38, 14, 2, 100);
	typeWriterExt(1, messB, 53, 14, 1, 100);

	clear();

	curs_set(0);
	while(fetched != 113){

		input = getch();

		// handle user input
		if(input != -1){
			fetched = input;
		}
		else{
			fetched = -1;
			prevFetched = -1;
		}

		// move accordingly
		if(fetched == 97 && prevFetched != 97 && cCol > 0){
			cCol--;
			prevFetched = fetched;
		}
		else if(fetched == 100 && prevFetched != 100 && cCol < 100){
			cCol++;
			prevFetched = fetched;
		}
		else if(fetched == 119 && prevFetched != 119 && cRow > 0){
			cRow--;
			prevFetched = fetched;
		}
		else if(fetched == 115 && prevFetched != 115 && cRow < 100){
			cRow++;
			prevFetched = fetched;
		}

		// redraw
		if(prevFetched != -1){
			clear();
			move(cRow, cCol);
			addch('Q');
			refresh();
		}
	}

	fetched = -1;

	while(fetched != 113){

		input = getch();

		if(input != -1){
			fetched = input;
			clear();
			printw("%d", fetched);
			refresh();
		}
	}

	endwin();

	return 0;
}

void waitFor(int msecs)
{
	useconds_t waitTime = msecs * 1000;
	usleep(waitTime);
}

void typeWriter(char* message, int line)
{
	int i = 0;
	char c = message[i];
	int len = strlen(message);
	int col = LINES/2 - len/2;

	move(line, col);
	refresh();
	cursorBlink(1);

	while(c != '\0'){
		addch(c);
		refresh();
		i++;
		c = message[i];
		waitFor(100);
	}

	cursorBlink(3);
}

void typeWriterExt(int preBlink, char* message, int col, int line, int postBlink, int delay)
{
	int i = 0;
	char c = message[i];

	move(line, col);
	refresh();
	
	if(preBlink > 0){
		cursorBlink(preBlink);
	}	

	while(c != '\0'){
		addch(c);
		refresh();
		i++;
		c = message[i];
		waitFor(delay);
	}

	if(postBlink > 0){
		cursorBlink(postBlink);
	}
}

void cursorBlink(int times)
{
	for(int i = 0; i < times; i++){
		curs_set(0);
		waitFor(400);
		curs_set(1);
		waitFor(400);
	}
}