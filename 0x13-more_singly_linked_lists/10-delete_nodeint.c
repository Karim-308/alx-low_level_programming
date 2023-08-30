#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes the node at a specific index.
 * @head: A double pointer to the head of the linked list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	prev_node = current->next;
	current->next = prev_node->next;

	free(prev_node);

	return (1);
}

