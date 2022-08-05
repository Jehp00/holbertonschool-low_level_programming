#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: double pointer to the linked list
 * @index: index at which to delete node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int a = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next)
		{
			tmp->next->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	while (a < index)
	{
		if (!tmp->next)
		{
			return (-1);
		}
		tmp = tmp->next;
		a++;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next)
	{
		tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
