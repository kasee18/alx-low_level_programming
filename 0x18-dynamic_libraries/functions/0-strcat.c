#include "main.h"
/**
* _strcat - this function concatenates two strings
* @dest: the value entered
* @src: value entered
* Return: 0
*/
char *_strcat(char *dest, char *src)
{
	int k;
	int v;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	v = 0;
	while (src[b] != '\0')
	{
		dest[k] = src[b];
		k++;
		b++;
	}
	dest[k] = '\0';
	return (dest);
}
