#include "main.h"
/**
* _strncat - this function concatenates two strins
* @dest: pointer to the source of bytes
* @src: a pointer to the source of bytes
* @n: the number of bytes
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int v;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	v = 0;
	while (v < n && src[b] != '\0')
	{
	dest[k] = src[v];
	k++;
	v++;
	}
	dest[k] = '\0';
	return (dest);
}
