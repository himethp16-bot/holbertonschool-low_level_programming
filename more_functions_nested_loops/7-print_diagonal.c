#include "main.h"
/**
 * print_diagonal - prints '\' n times
 *
 * @n: is the number of times to printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	i = 0;
	while (i < n)
	{
		_putchar('\\');
		_putchar('\n');
		i++;
		_putchar('\n');
	}
}
