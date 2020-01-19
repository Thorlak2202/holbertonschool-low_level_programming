#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into.
 * @key: is the key you are looking for.
 * Return: the value with the element, or NULL if fails.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i;

	if (key == NULL || ht == NULL)
	{
		return (NULL);
	}

	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];

	if (temp == NULL)
	{
		return (NULL);
	}
	while (strcmp(temp->key, key) != 0)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp->value);
}
