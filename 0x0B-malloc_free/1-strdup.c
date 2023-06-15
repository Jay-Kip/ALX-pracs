#include "main.h"


char *_strdup(char *str)
{
	char *p;

	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	i++;

	p = malloc(sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
