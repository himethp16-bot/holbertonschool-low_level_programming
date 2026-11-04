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
	if (n > 0)
	{
		_putchar('+');
		return (1);
		_putchar('\n');
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
		_putchar('\n');
	}
	else
	{
		_putchar('0');
		return (0);
		_putchar('\n');
	}

}
