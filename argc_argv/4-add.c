#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i;
	char *k;
	int sum = 0;
	unsigned int h;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			k = argv[i];
			for (h = 0; h < strlen(k); h++)
			{
				if ( k[h] < 48 || k[h] > 57)
				{
					printf("Error\n");
					return (3);
				}
			}
			sum += atoi(k);
			k++;
		
		}
		printf("%d\n", sum);
	}
	return (0);
}
