#include "lists.h"
/**
 * dlistint_len()-return sizee of elements of a list.
 * @h: pointer to head of the list
 *
 * Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;

	}
	return (size);
}
