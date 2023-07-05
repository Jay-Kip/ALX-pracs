#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));
	unsigned int i = 0;

	while (str[i])
		i++;
	if (!n)
		return (NULL);
		
	n->str = strdup(str);
	n->len = i;
	n->next = *head;
	*head = n;	

	return (*head);
}
