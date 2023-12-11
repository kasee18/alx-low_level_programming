#include "main.h"
/**
*_isupper - a function that checks for upper cases
*@c: the character to be checked
*Return: iof upper return 1, otherwise 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
