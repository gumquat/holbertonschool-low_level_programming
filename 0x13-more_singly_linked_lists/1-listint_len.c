#include "lists.h"

/**
 *listint_len - returns number of elements in listint_t list
 *@h: pointer to header of a list
 *Return: number of elements in list_t
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	int nodes = 0;

	while (temp)
	{
		nodes++;
		temp = temp->next;
	}

	return (nodes);
}
