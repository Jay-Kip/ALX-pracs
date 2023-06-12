#include "main.h"

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	p = malloc(sizeof(char));
	
	if (p == NULL)
	{
		return (NULL);
	}

	j = 0;
	i = 0;

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
