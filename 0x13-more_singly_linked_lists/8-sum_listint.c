#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list.
 * @head: pointer to the head of the list.
 *
 * Return: sum of all the data, or 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

