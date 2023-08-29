#include "lists.h"

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
        *head = current->next;  /* Change head to point to the next node */
        free(current);  /* Free the old head */
        return (1);
    }

    /* Move to the node just before the node to delete */
    for (i = 0; i < index - 1; i++)
    {
        if (current == NULL)  /* If the list is shorter than the index */
            return (-1);
        current = current->next;
    }

    if (current == NULL || current->next == NULL)
        return (-1);

    /* Unlink the node to delete */
    prev_node = current->next;
    current->next = prev_node->next;

    /* Free the node */
    free(prev_node);

    return (1);
}

