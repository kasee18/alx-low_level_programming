#include "main.h"
/**
* _isalpha - a program that checks for alphabets
* @c: charcter checked
* Return: 1 if c is a letter, 0 if else
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
