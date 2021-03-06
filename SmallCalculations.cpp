/*
	Converts a coordinate on a two-dimensional grid
	to an equivelent one dimensional index. This is achieved
	by effectively taking each row on the grid on putting them 
	next to each other from top to bottom.
	
	Size is either the number of rows or the number of columns,
	and should coincide with the value of parameter rows.
	
	The rows parameter is a flag to determine if the calculation
	should be done based on rows or columns. E.g. if rows is true,
	then position size - 1 would be the last column of the first row,
	and vis versa for false.
*/
int convertXY(int x, int y, int size, bool rows)
{
	return (rows) ? (y * size) + x : (x * size) + y;
}
bool randTrueFalse(double p)
{
	int random = std::rand() % 1000;
	
	return (random < 1000 * p);
}

int randBinChoice(double p, int c1, int c2)
{
	int random = std::rand() % 1000;
	
	return (random < 1000 * p) ? c1 : c2;
}
