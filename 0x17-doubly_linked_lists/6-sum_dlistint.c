#include "lists.h"
/**
 * sum_dlistint - function returns the sum of all the data of a list.
 * @head: address of the head of list
 * Return:sum of all the data of list ,if the list is empty, return 0
*/
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	dlistint_t *node = head;

	if (!node)
		return (0);

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);

}
