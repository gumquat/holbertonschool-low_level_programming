#include "lists.h"

/**
 * free_list - empty out the data from all the nodes in a list
 * @head: pointer to the head of a list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
