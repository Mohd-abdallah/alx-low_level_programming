#include "lists.h"
/**
 * print_list -  a function that prints all the elements of a list_t list.
 * If str is NULL, print [0] (nil).
 * @h: pointer.
 * @list_t: structure.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
