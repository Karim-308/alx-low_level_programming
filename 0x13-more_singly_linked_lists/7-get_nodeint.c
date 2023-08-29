#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: pointer to the head of the list.
 * @index: index of the node to return.
 *
 * Return: pointer to the nth node, or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head && count < index)
	{
		head = head->next;
		count++;
	}

	return (head);
}

