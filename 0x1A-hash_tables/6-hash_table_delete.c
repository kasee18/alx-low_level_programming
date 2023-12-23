#include "hash_tables.h"

/**
* hash_table_delete - this  function deletes a hash table
* @ht: pointer to the hash table
**/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tempo;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tempo = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tempo;
			}
		}
	}
	free(head->array);
	free(head);
}
