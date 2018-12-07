#include "shapes.h"

const size_t FLD_START_LIN = 3;
const size_t FLD_START_COL = 10;
const size_t FLD_SIZE_LIN = 24;
const size_t FLD_SIZE_COL = 9;
const size_t FLD_DEF_LIN = 24;
const size_t FLD_DEF_COL = 12;
const size_t FLD_VIZ_STRT = 3;
const size_t BRD_SIZE_COL = 25;

// function declarations
void initField(int field[FLD_DEF_LIN][FLD_DEF_COL]);
void insertBlock(int field[FLD_DEF_LIN][FLD_DEF_COL], int line, int col);
void makeField(int field[FLD_DEF_LIN][FLD_DEF_COL], int clear);
void makeFrame(char type);
void makeScoreBoard();
int compareFields(int playField[FLD_DEF_LIN][FLD_DEF_COL], int blockField[FLD_DEF_LIN][FLD_DEF_COL]);
int detectLines(int field[FLD_DEF_LIN][FLD_DEF_COL]);
void removeLine(int line, int field[FLD_DEF_LIN][FLD_DEF_COL]);
void updateAll(int playField[FLD_DEF_LIN][FLD_DEF_COL], int blockField[FLD_DEF_LIN][FLD_DEF_COL]);
void pressKeyToStart();

#include "field.c"