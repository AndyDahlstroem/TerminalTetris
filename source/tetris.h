#include "field.h"

// global structures
typedef struct tetris
{
	int state;
	int type;
	int lie;
	canvas_t actShape;
	int maxY;
	int maxX;
	int posY;
	int posX;
}tetris_t;

// function prototypes
void initTetris(tetris_t* thisTetris);
void tetrisToField(tetris_t* tetris, int field[FLD_DEF_LIN][FLD_DEF_COL]);
void incomingTetris(tetris_t *thisTetris, shape_t *thisShape, int action);

#include "tetris.c"