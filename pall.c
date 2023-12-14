#include "monty.h"
/**
 * f_pall - the prints
 * @head: the head
 * @counter: the conter
 * Return: the void function
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
