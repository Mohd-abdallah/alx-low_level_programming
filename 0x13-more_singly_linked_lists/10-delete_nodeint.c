#include "lists.h"
/**
 * delete_nodeint_at_index -  a function that deletes the node at index index
 * of a listint_t linked list.
 * where index is the index of the node that should be deleted.
 * Index starts at 0.
 * @head: pointer to pointer.
 * @index: integer.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *node, *delete;

	if (*head == NULL)
	{
		return (-1);
	}
	node = *head;
	if (index == 0)
	{
		delete = node;
		node = node->next;
		*head = node;
		free(delete);
		return (1);
	}
	for (x = 0; x < index - 1; x++)
	{
		if (node->next == NULL)
		{
			return (-1);
		}
		node = node->next;
	}
	delete = node->next;
	node->next = node->next->next;
	free(delete);
	return (1);
}
