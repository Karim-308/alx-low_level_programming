#include "lists.h"

/**
 * free_listint_safe - Safely frees a listint_t list.
 * @h: A pointer to the address of the head of the list_t list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *fast = *h, *slow = *h;
	size_t nodes = 0;

	if (!h || !*h)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow)
		{
			fast = *h;
			while (fast != slow)
			{
				nodes++;
				tmp = fast;
				fast = fast->next;
				free(tmp);
			}
			while (fast && slow)
			{
				nodes++;
				tmp = fast;
				fast = fast->next;
				free(tmp);
				if (fast == slow)
					break;
			}
			*h = NULL;
			return (nodes);
		}
	}

	slow = *h;
	while (slow)
	{
		tmp = slow->next;
		free(slow);
		slow = tmp;
		nodes++;
	}
	*h = NULL;
	return (nodes);
}

