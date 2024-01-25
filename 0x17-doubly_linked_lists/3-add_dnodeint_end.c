#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a list.
 * @head: address of the head of the list
 * @n: new data added to the list
 *
 *Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *NewNode = malloc(sizeof(dlistint_t));
	dlistint_t *node;

	if (!NewNode)
	{
		free(NewNode);
		return (NULL);
	}
	NewNode->n = n;
	NewNode->next = NULL;

	if (!*head)
	{
		NewNode->prev = NULL;
		*head = NewNode;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		NewNode->prev = node;
		node->next = NewNode;
	}
	return (NewNode);
}
