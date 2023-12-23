#include "hash_tables.h"

/**
* hash_table_get - a function that retrieves a value associated with key
* @ht: hash table pointer
* @key key to whivh value is sought
* Return: Null if key cannot be matched, else value of key associated with ht
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
