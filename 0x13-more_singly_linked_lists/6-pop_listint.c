#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: pointer to a pointer to the head of the list.
 *
 * Return: head node's data, or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (!*head)
		return (0);

	tmp = *head;
	data = tmp->n;
	*head = (*head)->next;
	free(tmp);

	return (data);
}

