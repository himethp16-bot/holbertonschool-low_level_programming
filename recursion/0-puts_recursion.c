#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer to a string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] = '\0')
		return _putchar(*s);
	else
		_putchar(s[i+1]);
	_putchar('\n')
}
