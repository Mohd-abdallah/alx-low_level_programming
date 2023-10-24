#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * where idx is the index of the list where the new node should be added.
 * Index starts at 0.
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 * @head: pointer to pointer.
 * @idx: integer.
 * @n: integer.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num = 0;
	listint_t *node, *curr_node;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		curr_node = malloc(sizeof(listint_t));
		if (curr_node == NULL)
			return (NULL);
		curr_node->n = n;
		curr_node->next = *head;
		*head = curr_node;
		return (curr_node);
	}
	node = *head;
	while (node != NULL)
	{
		if (num == idx - 1)
		{
			curr_node = malloc(sizeof(listint_t));
			if (curr_node == NULL)
				return (NULL);
			curr_node->n = n;
			curr_node->next = node->next;
			node->next = curr_node;
			return (curr_node);
		}
		node = node->next;
		num++;
	}
	return (NULL);
}
