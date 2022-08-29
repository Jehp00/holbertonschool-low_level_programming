#include "hash_tables.h"

/**
 * hash_table_create - create a new hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;

	if (size == 0)
	{
		return (NULL);
	}
	hash_t = malloc(sizeof(hash_table_t));
	if (!hash_t)
	{
		return (NULL);
	}
	hash_t->size = size;
	hash_t->array = calloc((size_t)hash_t->size, sizeof(hash_node_t *));
	if (hash_t->array == NULL)
	{
		return (NULL);
	}
	return (hash_t);
}
