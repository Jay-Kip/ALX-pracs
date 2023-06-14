#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int *array_range(int min, int max)
{
	int *p;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);

	i = max - min + 1;


	p = malloc(i * sizeof(int));

	if (p == NULL)
		return (NULL);


	for (j = 0; j <= max; j++)
	{
		p[j] = min++;
	}
	return (p);
}
