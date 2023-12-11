#include "main.h"
/**
*_strspn - program entry point
* @s: pointer to the input string
*@accept: input acceptance pointer
* Return: 0 (success)
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int v;

	while (*s)
	{
		for (v = 0; accept[v]; v++)
		{
			if (*s == accept[v])
			{
				k++;
				break;
			}
			else if (accept[v + 1] == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}
