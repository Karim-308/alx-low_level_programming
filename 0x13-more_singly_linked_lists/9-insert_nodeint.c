#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Double pointer to the head of the list.
 * @idx: Index where the new node should be added (starts at 0).
 * @n: Data for the new node.
 * 
 * Return: Address of the new node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	prev = NULL;
	current = *head;
	for (i = 0; i < idx && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}

	if (i != idx || prev == NULL)
	{
		free(new_node);
		return (NULL);
	}

	prev->next = new_node;
	new_node->next = current;
	return (new_node);
}

