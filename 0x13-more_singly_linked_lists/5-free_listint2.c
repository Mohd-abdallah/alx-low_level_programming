#include "lists.h"
/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: pointer to pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}

	*head = NULL;
}
