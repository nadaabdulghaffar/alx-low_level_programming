#include "lists.h"
/**
 * free_dlistint - function that frees a list
 * @head: address of head of list
 * Retur: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
