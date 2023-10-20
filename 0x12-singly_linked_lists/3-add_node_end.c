#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: pointer.
 * @str: pointer to a strinig.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *new_node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		new_node = *head;
		while (new_node->next != NULL)
		{
			new_node = new_node->next;
		}
		new_node->next = node;
	}
	return (node);
}
