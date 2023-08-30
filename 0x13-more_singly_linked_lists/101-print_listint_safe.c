#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: The head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t nodes = 0;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			do
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				nodes++;
				slow = slow->next;
			} while (slow != fast);

			return nodes;
		}
	}

	slow = head;
	while (slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		nodes++;
		slow = slow->next;
	}

	return nodes;
}

