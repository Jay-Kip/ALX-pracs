#include <stdio.h>
#include <stdlib.h>

int main(int a, char *k[])
{
	if (a== 3)
	{
		printf("%d\n", atoi(k[1]) * atoi(k[2]));
	}
	else
		printf("Error\n");

	return (0);
}
