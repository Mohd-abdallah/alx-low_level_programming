#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer.
 */
void free_listint(listint_t *head)
{
	listint *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		node = head;
	}
}
