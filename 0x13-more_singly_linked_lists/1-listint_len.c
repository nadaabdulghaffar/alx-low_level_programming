
#include "lists.h"

/**
 * listint_len() - returns the number of elements in a linked
 * @h: linked list fo type listint_t
 * Returns: the number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}


