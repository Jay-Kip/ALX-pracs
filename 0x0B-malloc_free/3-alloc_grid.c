#include "main.h"

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr =malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			
			free(ptr);

			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
