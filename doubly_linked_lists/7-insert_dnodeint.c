#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the beginning of the linked list
 * @idx: index at which to insert the new node
 * @n: data to enter into new node
 *
 * Return: pointer to the new node, or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int a;
	dlistint_t *new_node;
	dlistint_t *tmp = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node || !h)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (a = 0; tmp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			if (tmp->next == NULL)
			{
				return (add_dnodeint_end(h, n));
			}
			new_node->next = tmp->next;
			new_node->prev = tmp;
			tmp->next->prev = new_node;
			tmp->next = new_node;
			return (new_node);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
