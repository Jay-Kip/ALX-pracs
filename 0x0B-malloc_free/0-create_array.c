#include "main.h"
#include <stdlib.h>
#include <stdio.h>


char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = (void*)malloc(size * sizeof(char));

	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
