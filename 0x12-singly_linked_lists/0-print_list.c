#include "lists.h"
/**
 *print_list - prints elements from list
 *@h: head of linked list that needs to be printed
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int index = 0;

	const list_t *temp = h;

	while (temp)
	{
		if (!(temp -> str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}

		index++;
		temp = temp->next;
	}

	return (index);

}
