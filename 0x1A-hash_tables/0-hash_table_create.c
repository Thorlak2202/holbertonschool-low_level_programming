#include "hash_tables.h"
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_t;
    unsigned long int i;

    if (size == 0)
    {
        return(NULL);
    }

    hash_t = malloc(sizeof(hash_table_t));
    if(hash_t == NULL)
        return(NULL);
    
    hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
	{
		free(hash_t);
		return (NULL);
	}
	hash_t->size = size;

	for (i = 0; i < size; i++)
		hash_t->array[i] = NULL;

	return (hash_t);
}