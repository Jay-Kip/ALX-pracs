#include <stdio.h>
#include <stdlib.h>
#include "main.h"


int check(char *s);
int _len(char *s);

int main(int argc, char *argv[])
{
	char *x;
	char *y;
	int a, b, len, i,  d, e, *f, g = 0;

	x = argv[1];
	y = argv[2];

	if (argc != 3 || !check(x) || !check(y))
	{
		printf("Error\n");
		exit(98);
	}

	a = _len(x);
	b = _len(y);
	len = a + b + 1;

	f = malloc(sizeof(int) * len);

	if (!f)
		return (1);
	for (i = 0; i < a + b; i++)
		f[i] = 0;
	for (a = a - 1; a >= 0; a--)
	{
		d = x[a] - '0';
		e = 0;
		for (a = _len(y) - 1; a >= 0; a--)
		{
			g = y[b] - '0';
			e  += f[a + b + 1] + (d * g);
			f[a + b + 1] = e % 10;
			e /= 10;
		}
		if (e > 0)
			f[a + b + 1] += e;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (f[i])
			d = 1;
		if (d)
			_putchar(f[i] + '0');
	}
	if (!d)
		_putchar('0');
	_putchar('\n');
	
	free(f);

	return (0);





}

int check(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}
	return (1);
}


int _len(char *s)
{
	int k = 0;

	while (s[k] != '\0')
		k++;

	return (k);
}
