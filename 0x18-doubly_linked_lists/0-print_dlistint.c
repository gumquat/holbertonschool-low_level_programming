#include "lists.h"

/**
*print_dlistint - prints all elements in list_t
*@h: pointer to the header of the list to print
*Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int nodes = 0;

	while (temp)
	{

		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
	}

	return (nodes);
}
