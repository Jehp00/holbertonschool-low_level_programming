#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: double pointer to the first node in the list
 * @idx: index of the node to insert
 * @n: value for new node
 *
 * Return: pointer to the indexed node
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new_node;
	unsigned int a;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tmp = *head;
		for (a = 0; a < idx - 1 && tmp != NULL; a++)
		{
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
		return (NULL);
		}
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
