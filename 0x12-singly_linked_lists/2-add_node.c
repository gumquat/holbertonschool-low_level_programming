#include "lists.h"

/**
 *add_node - adds a new node at the beggining of the list
 *@head: pointer to the head of the list
 *@str: data that needs to go into the newly made node
 *Return: pointer to the list
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *newNode;
	newNode = malloc(sizeof(list_t));

	if (!newNode)
	{
		free(newNode);
		return(NULL);
	}

	newNode->next = *head;
	*head = newNode;
	(*head)->str = strdup(str);
	(*head)->len = strlen(str);
	(*head)->next = newNode->next;

	return (*head);
}
