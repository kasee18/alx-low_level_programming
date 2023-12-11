#include "main.h"
/**
* _memcpy - a function that copies bytes to amemory
*@dest: a pointer to where the bytes are to be copied
*@src: a pointer to the source of the bytes
*@n: number of bytes
*Return: the new memory with n bytes
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int v = n;

	for (; p < v; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
