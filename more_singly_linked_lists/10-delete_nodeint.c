#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 * @head: double pointer to the first node in the list
 * @index: index of the node to delete
 *
 * Return: pointer to the indexed node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *n;
	unsigned int a;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		n = (*head)->next;
		free(*head);
		*head = n;
		return (1);
	}
	current = *head;
	for (a = 0; a < index - 1; a++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	n = current->next;
	current->next = n->next;
	free(n);
	return (1);
}
