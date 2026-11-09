#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: pointer to a character
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length;

	while (s[length] != '\0')
	{
		length++;
	}

	length = length - 1;

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
