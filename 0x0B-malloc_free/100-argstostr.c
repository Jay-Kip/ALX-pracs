#include "main.h"


char *argstostr(int ac, char **av)
{
	char *p;
	int i = 0;
	int j = 0;
	int k = 0;
	int d = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			k++;
		}
	}
	/*k += ac;*/

	p = malloc(sizeof(char) * k);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[d] = av[i][j];

			d++;
		}
		if (p[d] == '\0')
		{
			p[d++] = '\n';
		}
	}
	return (p);
}

