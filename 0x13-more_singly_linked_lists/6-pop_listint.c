#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of listint_t linked list
 * and returns the head node’s data (n).
 * if the linked list is empty return 0
 * @head: pointer to pointer.
 * Retun: Data.
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *delete;

	if (*head == NULL)
	{
		return (0);
	}
	delete = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = delete;
	return (num);	
}
