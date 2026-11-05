#include "main.h"
/**
 * print_triangle - print triangle based on size
 *
 * @size: determines how large triangle
 *
 * Return: void
 *
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	i = 0;
	while (i <= size)
	{
		j = 0;
		while (j < i)
		{
			_putchar('#');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
