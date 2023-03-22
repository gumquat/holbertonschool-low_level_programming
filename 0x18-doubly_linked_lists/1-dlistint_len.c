#include "lists.h"

/**
 *dlistint_len - returns number of elements in a linked list
 *@h: pointer to the head of a list
 *Return: number
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int numNode = 0;

	while (temp)
	{
		numNode++;
		temp = temp->next;
	}
	return (numNode);
}
