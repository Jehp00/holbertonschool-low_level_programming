#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -  frees a listint_t list.
 * @head: pointer to the beginning of the list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *n;

	while (head != NULL)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
