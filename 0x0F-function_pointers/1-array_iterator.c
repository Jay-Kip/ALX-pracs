#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include <strings.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
