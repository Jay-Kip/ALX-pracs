#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));
	list_t *tmp = *head;
	unsigned int i = 0;

	while (str[i])
		i++;
	if (!n)
		return (NULL);


	n->str = strdup(str);
	n->len = i;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = n;

	return (n);
}


