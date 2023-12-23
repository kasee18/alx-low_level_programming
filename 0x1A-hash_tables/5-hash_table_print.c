#include "hash_tables.h"

/**
* hash_table_print - a function that prints ht
* @ht: ht pointer
* Description: key pairs should be printed in the order they appear in ht array
**/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(",");
			printf("'%s': '%s'", node-value);
			flag = 1;
			node = node->next;
		}
	}
}
printf("}\n");
