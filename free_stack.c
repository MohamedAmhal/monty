#include "monty.h"
/**
* free_stack - doubly linked lists
* @head: the head function
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
