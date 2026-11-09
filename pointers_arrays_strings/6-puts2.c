#include "main.h"
/**
 * puts2 - prints every 2nd character in a string
 * @str: pointer to a string
 *
 * Return: void
 */

void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	i = 0;

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
