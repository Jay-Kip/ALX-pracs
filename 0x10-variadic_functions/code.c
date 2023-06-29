#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int add(int args, ...);

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);
	int d = atoi(argv[4]);
	printf("Sum 1 = %d\n", add(4, a, b, c, d));


	return (0);
}

int add(int args, ...)
{
	va_list list;

	va_start(list, args);

	int i, sum = 0;

	for (i = 0; i < args; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);


	return (sum);
}
