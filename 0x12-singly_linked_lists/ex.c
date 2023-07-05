#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct node
{
	int value;
	struct node * next;
} node;


typedef struct
{
	node *head;
	node *tail;
	int size;
} Queue;

/*Queue *create_queue();
int size(Queue *queue);
bool is_empty(Queue *queue);
int peek(Queue *queue, bool *status);
void enqueue(Queue, bool *status);
int dequeue(Queue *queue, bool *status);
void destroy_queue(Queue *queue);
*/

Queue *create_queue()
{
	Queue *queue = malloc(sizeof(Queue));

	queue->head = NULL;
	queue->tail = NULL;
	queue->size = 0;

	return queue;
}

int size(Queue *queue)
{
	return (queue->size);
}
bool is_empty(Queue *queue)
{
	return (queue->size == 0);
}

/*int peek(Queue *queue, bool *status)
{
	if (is_empty(queue))
	{
		*status = false;
		return (NULL);
	}
	return queue->head->value;
}*/

/*void enqueue(Queue *queue, int value)
{
	node *newnode = malloc(sizeof(node));

	node->value = value;
	node->next = NULL;

	if (is_empty(queue))
	{
		queue->head = newnode;
		queue->tail = newnode;
	}
	else
	{

		queue->tail->next = newnode;

		queue->tail = newnode;
	}

	queue->size++;
}*/

int dequeue(Queue *queue, bool *status)
{
	if (is_empty(queue))
	{
		*status = false;
		
	}
	*status = true;

	int value = queue->head->value;

	node *oldhead = queue->head;

	if (queue->size == 1)
	{
		queue->head = NULL;
		queue->tail = NULL;
	}
	else
	{
		queue->head = queue->head->next;
	}
	free(oldhead);

	queue->size--;


	
	queue->head = queue->head->next;

	return value;
}

void destroy_queue(Queue *queue)
{
	node *currentnode = queue->head;
	
	while (currentnode != NULL)
	{
		node *temp = currentnode;
		currentnode = currentnode->next;
		free(temp);
	}

	free(queue);

}





int main()
{
	Queue *queue = create_queue();
	if (is_empty(queue)) printf("Queue is empty\n");

	Queue *queue = queue size();
	if (is_empty(queue)) printf("Queue is empty\n");



	/*Queue *create_queue();
	20 int size(Queue *queue);
	21 bool is_empty(Queue *queue);
	22 int peek(Queue *queue, bool *status);
	23 void enqueue(Queue, bool *status);
	24 int dequeue(Queue *queue, bool *status);
	25 void destroy_queue(Queue *queue);
	*/

	printf("Hello  Jay\n");


	return (0);
}
