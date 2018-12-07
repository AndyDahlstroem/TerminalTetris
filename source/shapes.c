// implementation of shapes

int makeShape_0(shape_t* thisShape)
{
	// validate argument
	if(!thisShape) return -1;

	size_t lie = 0;
	size_t line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 1;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 1;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 1;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 2;
	thisShape->lie[lie].blocks[line][0] = 1;
	thisShape->lie[lie].blocks[line][1] = 1;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 1;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 1;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 1;
	thisShape->lie[lie].blocks[line][0] = 1;
	thisShape->lie[lie].blocks[line][1] = 1;
	thisShape->lie[lie].blocks[line][2] = 1;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 2;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 1;
	thisShape->lie[lie].blocks[line][2] = 1;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 1;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 1;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 1;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 3;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 1;
	thisShape->lie[lie].blocks[line][0] = 1;
	thisShape->lie[lie].blocks[line][1] = 1;
	thisShape->lie[lie].blocks[line][2] = 1;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 1;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
}

int makeShape_1(shape_t* thisShape)
{
	// validate argument
	if(!thisShape) return -1;

	size_t lie = 0;
	size_t line = 0;
	thisShape->lie[lie].blocks[line][0] = 2;
	thisShape->lie[lie].blocks[line][1] = 2;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 1;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 2;
	thisShape->lie[lie].blocks[line][2] = 2;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 1;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 2;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 1;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 2;
	thisShape->lie[lie].blocks[line][2] = 2;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 2;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	
	lie = 2;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 1;
	thisShape->lie[lie].blocks[line][0] = 2;
	thisShape->lie[lie].blocks[line][1] = 2;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 2;
	thisShape->lie[lie].blocks[line][2] = 2;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 3;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 2;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 1;
	thisShape->lie[lie].blocks[line][0] = 2;
	thisShape->lie[lie].blocks[line][1] = 2;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 2;
	thisShape->lie[lie].blocks[line][0] = 2;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
}

int makeShape_2(shape_t* thisShape)
{
	// validate argument
	if(!thisShape) return -1;

	size_t lie = 0;
	size_t line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 3;
	thisShape->lie[lie].blocks[line][2] = 3;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 1;
	thisShape->lie[lie].blocks[line][0] = 3;
	thisShape->lie[lie].blocks[line][1] = 3;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 1;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 3;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 1;
	thisShape->lie[lie].blocks[line][0] = 3;
	thisShape->lie[lie].blocks[line][1] = 3;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 3;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 2;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 1;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 3;
	thisShape->lie[lie].blocks[line][2] = 3;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 2;
	thisShape->lie[lie].blocks[line][0] = 3;
	thisShape->lie[lie].blocks[line][1] = 3;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 3;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 3;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 1;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 3;
	thisShape->lie[lie].blocks[line][2] = 3;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 3;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
}

int makeShape_3(shape_t* thisShape)
{
	// validate argument
	if(!thisShape) return -1;

	size_t lie = 0;
	size_t line = 0;
	thisShape->lie[lie].blocks[line][0] = 4;
	thisShape->lie[lie].blocks[line][1] = 4;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 1;
	thisShape->lie[lie].blocks[line][0] = 4;
	thisShape->lie[lie].blocks[line][1] = 4;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 1;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 4;
	thisShape->lie[lie].blocks[line][1] = 4;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 1;
	thisShape->lie[lie].blocks[line][0] = 4;
	thisShape->lie[lie].blocks[line][1] = 4;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 2;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 4;
	thisShape->lie[lie].blocks[line][1] = 4;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 1;
	thisShape->lie[lie].blocks[line][0] = 4;
	thisShape->lie[lie].blocks[line][1] = 4;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 3;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 4;
	thisShape->lie[lie].blocks[line][1] = 4;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 1;
	thisShape->lie[lie].blocks[line][0] = 4;
	thisShape->lie[lie].blocks[line][1] = 4;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
}

int makeShape_4(shape_t* thisShape)
{
	// validate argument
	if(!thisShape) return -1;

	size_t lie = 0;
	size_t line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 5;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 1;
	thisShape->lie[lie].blocks[line][0] = 5;
	thisShape->lie[lie].blocks[line][1] = 5;
	thisShape->lie[lie].blocks[line][2] = 5;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 1;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 5;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 1;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 5;
	thisShape->lie[lie].blocks[line][2] = 5;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 5;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 2;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 1;
	thisShape->lie[lie].blocks[line][0] = 5;
	thisShape->lie[lie].blocks[line][1] = 5;
	thisShape->lie[lie].blocks[line][2] = 5;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 5;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 3;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 5;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 1;
	thisShape->lie[lie].blocks[line][0] = 5;
	thisShape->lie[lie].blocks[line][1] = 5;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 5;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
}

int makeShape_5(shape_t* thisShape)
{
	// validate argument
	if(!thisShape) return -1;

	size_t lie = 0;
	size_t line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 1;
	thisShape->lie[lie].blocks[line][0] = 6;
	thisShape->lie[lie].blocks[line][1] = 6;
	thisShape->lie[lie].blocks[line][2] = 6;
	thisShape->lie[lie].blocks[line][3] = 6;

	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 1;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 6;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 1;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 6;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 6;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 6;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 2;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 1;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 2;
	thisShape->lie[lie].blocks[line][0] = 6;
	thisShape->lie[lie].blocks[line][1] = 6;
	thisShape->lie[lie].blocks[line][2] = 6;
	thisShape->lie[lie].blocks[line][3] = 6;

	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 3;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 6;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 1;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 6;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 6;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 6;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
}

int makeShape_6(shape_t* thisShape)
{
	// validate argument
	if(!thisShape) return -1;

	size_t lie = 0;
	size_t line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 7;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 1;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 7;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 7;
	thisShape->lie[lie].blocks[line][2] = 7;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 1;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 1;
	thisShape->lie[lie].blocks[line][0] = 7;
	thisShape->lie[lie].blocks[line][1] = 7;
	thisShape->lie[lie].blocks[line][2] = 7;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 2;
	thisShape->lie[lie].blocks[line][0] = 7;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 2;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 7;
	thisShape->lie[lie].blocks[line][1] = 7;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 1;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 7;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 7;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;

	lie = 3;
	line = 0;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 7;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 1;
	thisShape->lie[lie].blocks[line][0] = 7;
	thisShape->lie[lie].blocks[line][1] = 7;
	thisShape->lie[lie].blocks[line][2] = 7;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 2;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
	line = 3;
	thisShape->lie[lie].blocks[line][0] = 0;
	thisShape->lie[lie].blocks[line][1] = 0;
	thisShape->lie[lie].blocks[line][2] = 0;
	thisShape->lie[lie].blocks[line][3] = 0;
}
