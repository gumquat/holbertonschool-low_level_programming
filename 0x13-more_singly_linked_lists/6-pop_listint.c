#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list
 *@head: pointer to the head of a list
 *Return: head node data or 0 if enpty
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
