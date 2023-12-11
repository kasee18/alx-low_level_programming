#include "main.h"
/**
* char *_strcpy - a program that copies the string
* @dest: destination to copy the string
* @src: the source to copy from
* Return: string value
*/
char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int v = 0;

	while (*(src + k) != '\0')
	{
		k++;
	}
	for ( ; v < k ; v++)
	{
		dest[v] = src[v];
	}
	dest[k] = '\0';
	return (dest);
}
