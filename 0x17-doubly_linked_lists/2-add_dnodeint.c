#include "lists.h"
/**
 * add_dnodeint -  function that adds a new node at the beginning of a list
 * @head: Address of the head
 * @n: data of new Node
 *
 * Return:the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t  *NewNode = malloc(sizeof(dlistint_t));

	if (!NewNode)
	{
		free(NewNode);
		return (NULL);
	}
	NewNode->n = n;
	NewNode->prev = NULL;

	if (!*head)
	{
		*head = NewNode;
		NewNode->next = NULL;
	}
	else
	{
		NewNode->next = *head;
		(*head)->prev = NewNode;
		*head = NewNode;
	}
	return (NewNode);

}
