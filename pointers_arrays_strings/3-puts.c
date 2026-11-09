#include "main.h"
/**
 * _puts - prints string followed by new line
 * @str: A pointer to a string
 *
 * Return: A string
 */

void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n')
}


