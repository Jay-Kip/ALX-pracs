#include "main.h"


int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	p = malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = (int *) malloc(width * sizeof(int));
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
