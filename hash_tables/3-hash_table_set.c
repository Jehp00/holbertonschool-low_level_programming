#include "hash_tables.h"

/**
 * create_the_node - create the node for the new element
 * @key: key not empty
 * @value: key's value
 * Return: the new node
 */

hash_node_t *create_the_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - adds a new element in the hash table
 * @ht: hash table you want to add or update the key/value
 * @key: key
 * @value: value associated with the key
 * Return: 1if it succeeded, 0 if otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node, *current;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL
		|| strlen(key) == 0 || value == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(current->value);
			current->value = new_value;
			return (1);
		}
		current = current->next;
	}
	hash_node = create_the_node(key, value);
	if (hash_node == NULL)
	{
		return (0);
	}
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}
