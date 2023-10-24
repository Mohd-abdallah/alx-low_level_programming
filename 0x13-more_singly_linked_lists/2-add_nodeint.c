#include "lists.h"
/**
 * add_nodeint - function that adds new node at the beginning of a list_t list.
 * @head: pointer to pointer
 * @n: integer
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
