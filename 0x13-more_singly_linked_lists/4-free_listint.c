#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list.
 * @head: pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}



