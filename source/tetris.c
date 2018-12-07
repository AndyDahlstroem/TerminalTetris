// tetris implementation
void initTetris(tetris_t* thisTetris)
{
	thisTetris->state = 0;
	thisTetris->type = -1;
	thisTetris->maxY = 100;
	thisTetris->maxX = 100;
	thisTetris->posY = 0;
	thisTetris->posX = 0;
	for(int y = 0; y < CANVAS_SIZE; y++){
		for(int x = 0; x < CANVAS_SIZE; x++){
			thisTetris->actShape.blocks[y][x] = 0;
		}
	}
}

void tetrisToField(tetris_t* tetris, int field[FLD_DEF_LIN][FLD_DEF_COL])
{
	for(int y = 0; y < CANVAS_SIZE; y++){
		for(int x = 0; x < CANVAS_SIZE; x++){
			if(tetris->actShape.blocks[y][x] != 0){
				field[y + gRow][x + gCol] = tetris->actShape.blocks[y][x];
			}
		}
	}
}

void incomingTetris(tetris_t *thisTetris, shape_t *thisShape, int action)
{

	//shape_t* thisShape = shapes[type];
	int newLie = 0;
	
	// state machine
	switch(thisTetris->state){

		// idle
		case 0:

			if(thisTetris->type != -1) thisTetris->state = 1;

		// set starting rotation
		case 1:
			newLie = rand();
			newLie = modulo(newLie, 4);
			gRot = newLie;
			thisTetris->state = 2;

		// copy selected tetris type in selected lie
		case 2:

			for(int y = 0; y < CANVAS_SIZE; y++){
				for(int x = 0; x < CANVAS_SIZE; x++){
					thisTetris->actShape.blocks[y][x] = thisShape->lie[gRot].blocks[y][x];
				}
			}

			// tetris now on playfield
			if(action == 1){
				initTetris(thisTetris);
			}
	}
}