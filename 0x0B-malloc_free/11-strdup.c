#include "main.h"

char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
		i++;
	
	p = malloc(i + 1 * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
