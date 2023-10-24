#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 * @h: pointer.
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
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
