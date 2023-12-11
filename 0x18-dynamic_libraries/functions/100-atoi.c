#include "main.h"
/**
* _atoi - a function that converts a string into an int
* @s: a pointer to the string used in the program
* Return: int
*/
int _atoi(char *s)
{
	int sign = 1, k = 0;
	unsigned int unsign = 0;

	while (!(s(k) <= '9' && s[k] >= '0') && s[k] != '\0')
	{
		if (s[k] == '-')
			sign *= -1;
		k++;
	}
	while (s[k] <= '9' && (s[k] >= '0' && s[k] != '\0'))
	{
		unsign = (unsign * 10) + (s[k] - '0');
		k++;
	}
	unsign *= sig;
	return (unsign);
}
