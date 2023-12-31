#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer.
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
