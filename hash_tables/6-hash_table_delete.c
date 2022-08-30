#include "hash_tables.h"

/**
 * _free_l - frees the linked list
 * @head: node list to be freed
 * Return: Nothing void
 */

void _free_l(hash_node_t *head)
{
	hash_node_t *curent;

	while (head)
	{
		curent = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = curent;
	}

}

/**
 * hash_table_delete - deletes the hash table
 * @ht: hash table
 * Return: Nothing void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int a;

	if (!ht)
	{
		return;
	}
	for (a = 0; a < ht->size; a++)
	{
		_free_l(ht->array[a]);	
	}
	free(ht->array);
	free(ht);
}
