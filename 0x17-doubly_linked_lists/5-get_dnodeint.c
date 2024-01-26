#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: address of head of list
 * @index: index of the node
 * Return:nth node ,if the node does not exist, return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	while (node)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
