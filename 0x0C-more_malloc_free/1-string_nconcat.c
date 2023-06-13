#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int str1 = 0;
	unsigned int str2 = 0;

	while (s1 && s1[str1])
		str1++;
	while (s2 && s2[str2])
		str2++;

	if (n < str2)
		p = malloc(sizeof(char));
	else
		p = malloc(sizeof(char));

	if (!p)
		return (NULL);

	while ( i < str1)
	{
		p[i] = s1[i];
		i++;
	}
	while (n < str2 && i < (str1 + n))
	{
		p[i++] = s2[j++];
	}
	while (n > str2 && i < (str1 + str2))
	{
		p[i++] = s2[j++];
	}
	p[i] = '\0';

	return (p);
}

