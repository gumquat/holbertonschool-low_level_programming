#include "lists.h"

/**
*add_dnodeint - adds a new node at the beggining of a dlistint_t list
*@head: pointer to the head of a node list
*@n: location index of an element
*Return: address of new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(*newNode));
	dlistint_t *temp = *head;

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;

	if (!temp)
		newNode->next = NULL;
	else
	{
		while (temp->prev)
			temp = temp->prev;

		temp->prev = newNode;
		newNode->next = temp;
	}

	*head = newNode;

	return (newNode);
}
