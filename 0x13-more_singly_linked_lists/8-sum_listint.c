#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the data
 * (n) of a listint_t linked list.
 * if the list is empty, return 0.
 * @head: pointer.
 * Return: sum of data.
 */
int sum_listint(listint_t *head)
{
	int sum_of_data = 0;
	listint_t *node;

	if (head == NULL)
	{
		return (0);
	}
	node = head;
	while (node != NULL)
	{
		sum_of_data += node->n;
		node = node->next;
	}
	return (sum_of_data);
}
