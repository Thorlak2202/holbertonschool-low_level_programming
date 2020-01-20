#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *new;
	int flag = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		new = ht->array[i];
		if (new != NULL)
		{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", new->key, new->value);
		while ((new = new->next) != NULL)
		{
			printf(", ");
			printf("'%s': '%s'", new->key, new->value);
		}
		flag = 1;
		}
	}
	printf("}\n");
}
