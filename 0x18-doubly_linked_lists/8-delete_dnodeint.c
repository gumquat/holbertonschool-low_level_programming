#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes a node at the specified index
 *@head: pointer to the head of a string
 *@index: location of node needing to be deleted
 *Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int location = 0;
	dlistint_t *node;

	if (*head == NULL)
		return (-1);

	node = *head;

	while (!index && !node)
	{
		node = node->next;
		location++;
	}

	if (!node)
		return (-1);

	if (node->prev == NULL)
	{
		node->next->prev = NULL;
		*head = node->next;
	}
	else if (node->next == NULL)
	{
		node->prev->next = NULL;
	}
	else
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
	}

	free(node);
	return (1);
}
