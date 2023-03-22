#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a list
 *@head: pointer to the head of a node list
 *@n:data
 *Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(*newNode));
	dlistint_t *temp = *head;

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}
