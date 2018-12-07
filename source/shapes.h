// Declaration of shapes

// constants
#define CANVAS_SIZE 4
#define LIES 4

// all shapes are defined on a 4x4 canvas
typedef struct canvas{
	int blocks[CANVAS_SIZE][CANVAS_SIZE];			
}canvas_t;

// all shapes are defined in 4 lies
typedef struct shape{
	canvas_t lie[LIES];
}shape_t;

// function prototypes
int makeShape_0(shape_t* thisShape);
int makeShape_1(shape_t* thisShape);
int makeShape_2(shape_t* thisShape);
int makeShape_3(shape_t* thisShape);
int makeShape_4(shape_t* thisShape);
int makeShape_5(shape_t* thisShape);

#include "shapes.c"