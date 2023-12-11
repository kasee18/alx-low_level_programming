#include "main.h"
/**
* _memset - fills a memory with a specific value
* @s: addresss of the memory to be filled
* @b: value to be filled
* @n: bytes to be changed
* Return: new array having the new n bytes value
*/
char *_memset(char *s, char b, unsigned int n)
{
	int q = 0;

	for (; n > 0; q++)
	{
		s[q] = b;
		n--;
	}
	return (s);
}
