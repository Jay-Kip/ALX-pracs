#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
	(void) f;

	printf("%s", name);
}	
