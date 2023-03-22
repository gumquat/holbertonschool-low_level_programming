#include "lists.h"

/**
 *get_dnodeint - returns the nth node of a linked list
 *@head: pointer to the head of a node list
 *@index: location/address value
 *Return: stuff and things oh my
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int location = 0;

	while (temp)
	{
		if(location == index)
		{
			return (temp);
		}

		temp = temp->next;
		location++;
	}

	return (NULL);
}
