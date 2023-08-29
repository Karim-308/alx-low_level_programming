#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list and sets the head to NULL.
 * @head: pointer to a pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}

