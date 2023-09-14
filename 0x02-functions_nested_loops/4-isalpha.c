#include "main.h"
/**
 * _isalpha - check if char is alpha
 * @c: is the char to be checked
 * Return: 1 if char is alphabet, otherwise 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
