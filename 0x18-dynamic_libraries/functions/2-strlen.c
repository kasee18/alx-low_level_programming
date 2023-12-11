#include "main.h"
/**
* _strlen - a program that returns the length of a string
*@s: pointer to the string
*Return: string length
*/
int _strlen(char *s)
{
	int k = 0;

	while (*s != '\0')
	{
		k++;
		s++;
	}
	return (k);
}
