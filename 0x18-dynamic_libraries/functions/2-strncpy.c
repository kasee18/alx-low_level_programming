#include "main.h"
/**
* _strncpy - a function that copies a string
* @dest: destination of the code to be copied
* @src: source of the code to be copied
* @n: number of bytes to be copied
* Return: pointer to the destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}

	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
