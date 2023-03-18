#include "lists.h"

/**
 *insert_nodeint_at_index - insert a new node somewhere in a string
 *@head: pointer to the head of a string
 *@idx: spot in a list to place the new node
 *@n: data
 *Return: address of the new node or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *newNode = malloc(sizeof(*newNode));
	unsigned int counter = 0;

	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (temp)
	{
		if (counter == idx - 1)
			break;
		
		counter++;
		temp = temp->next;
	}
	
	if (counter < idx - 1)
		return (NULL);

	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
