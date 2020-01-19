#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key, key can not be an empty string.
 * @value: is the value associated with the key.
 * @value: must be duplicated.
 * @value: can be an empty string
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];

	if (temp != NULL)
	{
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[i] != NULL)
	{
		new->next = ht->array[i];
	}
	ht->array[i] = new;
	return (1);
}
