#include "hash_tables"

shash_table_table_create(unsigned long int size);
void shash_table_print(const shash_table_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
* shash_table_create - this function creates a sorted ht
* @size: tne sorted ht size
* Return: NULL if an error, else pointer to the sorted ht
**/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int k;

	ht->size = size;
	ht = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		ht->array[k] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}
