#include "main.h"

void free_grid(int **grid, int height)
{
	(void) height;


	free(grid);
}

