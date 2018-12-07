void intro();
// void waitFor(int msecs);
void typeWriterExt(int preBlink, char* message, int col, int line, int postBlink, int delay);
void cursorBlink(int times);

void intro()
{
	// messages
	char mess1[] = "This is my final project for CS50x";
	char mess2[] = "Finally...";
	char mess3[] = "its done!";
	char mess4[] = "This is a C implementation of the good old Tetris game.";
	char mess5[] = "Using curses to show the game in a terminal window.";
	char mess6[] = "Source code is found on GitHub, user: ";
	char mess7[] = "AndyDahlstroem";
	char mess8[] = "CS50 is really something. Special thanks to the staff.";
	char mess9[] = "Special thanks also to Niklas Juul for being a total bad-ass!";
	char messA[] = "Andy Dahlstroem, SE, 2018/12/14. ";
	char messB[] = "Signing off...";
	char messC[] = "now";

	// initial blink
	cursorBlink(2);

	// set color
	init_pair(3, COLOR_GREEN, COLOR_BLACK);
	attron(COLOR_PAIR(3));

	// print messages
	typeWriterExt(1, mess1, 5, 5, 3, 100);
	typeWriterExt(1, mess2, 5, 7, 1, 200);
	typeWriterExt(0, mess3, 16, 7, 4, 50);
	typeWriterExt(1, mess4, 5, 8, 3, 100);
	typeWriterExt(1, mess5, 5, 9, 3, 100);	
	typeWriterExt(1, mess6, 5, 10, 1, 100);
	typeWriterExt(0, mess7, 43, 10, 5, 75);
	typeWriterExt(1, mess8, 5, 12, 2, 100);
	typeWriterExt(1, mess9, 5, 13, 2, 100);
	typeWriterExt(1, messA, 5, 15, 1, 100);
	typeWriterExt(0, messB, 38, 15, 1, 100);
	typeWriterExt(1, messC, 53, 15, 1, 100);
	attroff(COLOR_PAIR(3));
	init_pair(3, COLOR_BLACK, COLOR_GREEN);

	clear();

	curs_set(0);
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