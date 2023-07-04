#include <stdio.h>
#include <stdlib.h>

typedef struct node *ptr;
typedef struct
{
	int value;
	ptr next;
} node;

int main()
{
	ptr frst = NULL;

	frst = malloc(sizeof(node));
	frst->value = 10;
	frst->next = NULL;

	printf("Hello  Jay\n");


	return (0);
}
