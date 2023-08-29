#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: pointer to a pointer to the head of the list.
 * @n: integer to add to the node.
 *
 * Return: address of the new node, or NULL on failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next)
		last = last->next;
	last->next = new_node;

	return (new_node);
}

