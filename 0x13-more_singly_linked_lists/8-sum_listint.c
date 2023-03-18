#include "lists.h"

/**
 *sum_listint - returns thesum of all data (n) stored in the nodes of a list
 *@head: pointer to the head of a list
 *Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
