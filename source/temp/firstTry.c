#include <ncurses.h>

int main()
{
	initscr();		// start curses mode
	cbreak();		//
	noecho();		// dont echo while we do getch
	nodelay(stdscr, TRUE);	// makes getch() non blocking

	int counter = 0;
	int input = 0;
	int fetched = 0;
	int cRow = 0;
	int cCol = 0;
	int prevFetched = 0;

	printw("Hi! Lets go...");	// add string to output	
	refresh();		// refresh screen (output->)
	
	while(fetched != 113){

		input = getch();

		if(input != -1){
			fetched = input;
		}

		if(fetched == 97 && prevFetched != 97 && cCol > 0){
			cCol--;
			prevFetched = fetched;
		}
		else if(fetched == 100 && prevFetched != 100 && cCol < 10){
			cCol++;
			prevFetched = fetched;
		}

//		if(fetched == 113) break;

		move(cRow, cCol);
		refresh();
/*
		if(counter > 10000){
			clear();
			move(cRow, cCol);
			printw("Ding %d", fetched);
			refresh();
			counter = 0;
			cRow++;
		}
*/
	}

	printw("cRow = %d - cCol = %d", cRow, cCol);
	refresh();
	fetched = 0;

	while(fetched != 113){

		input = getch();

		if(input != -1){
			fetched = input;
		}
	}

	endwin();

	return 0;
}
