#include "main.h"
/**
* _strstr - entry point
* @haystack: input one
* @needle: pointer to the second
* Return: 0 (success)
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *v = needle;

		while (*k == *v && *v != '\0')
		{
			k++;
			v++;
		}
		if (*v == '\0')
			return (haystack);
	}
	return (0);
}
