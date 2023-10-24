#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * where index is the index of the node, starting at 0.
 * if the node does not exist, return NULL
 * @head: pointer.
 * @index: integer.
 * Return:  the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num;
	listint_t *node;

	if (head == NULL)
	{
		return (NULL);
	}
	node = head;
	for (num = 0; num < index; num++)
	{
		if (node == NULL)
		{
			return (NULL);
		}
		node = node->next;
	}

	return (node);
}
