#include "main.h"
/**
* _strchr - entry point
* @s: pointer to the input
* @c: pointer to the input value
* Return: 0 (success)
*/
char *_strchr(char *s, char c)
{
	int k = o;

	for (; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (&s[k]);
	}
	return (0);
}
