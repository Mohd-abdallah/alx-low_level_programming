#include "lists.h"
/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list.
 * @h: pointer
 * Return: the number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t num_of_element = 0;

	if (h == NULL)
		return (-1);
	while (h != NULL)
	{
		num_of_element++;
		h = h->next;
	}
	return (num_of_element);
}
