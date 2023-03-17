#include "lists.h"

/**
 *add_nodeint - adds a new node at the beggining of a list
 *@head: pointer to head of a list
 *@n: new node data
 *Return: address of a newly made element, or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newNode = malloc(sizeof(*newNode));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = temp;
	*head = newNode;

	return (newNode);
}
