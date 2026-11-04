#include "main.h"
/**
 * _isalpha - Checks for any letter
 * @c: The character to check (passed as an int)
 *
 * Return: 1 if c is a letter, 0 otherwise
 *
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
