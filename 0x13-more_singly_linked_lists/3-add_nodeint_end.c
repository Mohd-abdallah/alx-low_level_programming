#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at
 * the end of a listint_t list.
 * @head: pointer to pointer.
 * @n: integer
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *new_node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
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
