#include "lists.c"

/**
 *add_node_end - adds a node to the end of a list
 *@head: pointer to the head node of the list
 *@str: string that gets put into the new node
 *Return: address of the new data in the new node, or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *newNode = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (temp->next)
			temp = temp->next;

		temp->next = newNode;
	}
	return (newNode);
}
