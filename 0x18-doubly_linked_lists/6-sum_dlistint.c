#include "lists.h"

/**
 *sum_dlistint - returns the sum of data in a node
 *@head: pointer the head of a list
 *Return: data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
