#include <stdio.h>
#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list k;
	unsigned int i;
	char *str;

	va_start(k, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(k, char *);
		printf("%s", str);
		
		if (i != n && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(k);
}
