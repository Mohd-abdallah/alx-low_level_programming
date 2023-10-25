#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *node;

	node = h;
	while (node != NULL)
	{
		printf("%d", node->n);
		node = node->next;
		node_count++;
	}
	return (node_count);
}
