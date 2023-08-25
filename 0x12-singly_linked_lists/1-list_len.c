#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

