#include "hash_tables.h"
/**
* key_index - This  function gets index at which a pair of key is to be stored
* @key: key which index is to be taken
* @size: size of the array of hash table
* Return: the index (success)
**/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
