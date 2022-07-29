#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first node in the list
 * @index: index of the node to return
 *
 * Return: pointer to the indexed node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	if (head == NULL)
		return (NULL);
	while (c < index)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
	c++;
	}
	return (head);
}
