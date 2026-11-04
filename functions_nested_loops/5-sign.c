#include "main.h"
/**
 * print_sign - Checks if number positive, negative or zero
 * @n: number to check
 *
 * Return: 1 if positive, -1 if negative and 0 if 0
 *
 */
int print_sign(int n)
{
	_putchar(',');
	_putchar(' ');

	if (n > 0)
	{
		_putchar('+');
		_putchar('\n');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar('\n');
		return (-1);
	}
	else
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

}
