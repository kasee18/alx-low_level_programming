#include "hash_tables.h"
/**
* hash_table_set a function that adds an element in hash table
* @ht: hash table pointer
* @key: key to be added
* @value: key associated value
* Return: 0 if failed, 1 if else
**/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			/* updating the existing key */
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
			{
				free(value_copy);
				return (0);
			}
			free(value_copy);
			return (1);
		}
		temp = temp->next;
	}

	/* creating a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		free(new_node);
		return (0);
	}

	new_node->value = value_copy;

	}
	/* adding a new node to the beginning of the list*/
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
