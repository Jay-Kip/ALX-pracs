#include <stdio.h>
#include "variadic_functions.h"


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *k;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		k = va_arg(args, char *);

		printf("%s", k);

		if ((n - 1) != i && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
