#include "lists.h"
/**
 * reverse_listint -  a function that reverses a listint_t linked list.
 * You are not allowed to use more than 1 loop.
 * You are not allowed to use malloc, free or arrays.
 * ou can only declare a maximum of two variables in your function
 * @head: pointer o pointer.
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = *head;
	listint_t *prev_node = NULL;
	listint_t *next_node;

	while (node)
	{
		next_node = node->next;
		node->next = prev_node;
		prev_node = node;
		node = next_node;
	}
	*head = prev_node;
	return (*head);
}
