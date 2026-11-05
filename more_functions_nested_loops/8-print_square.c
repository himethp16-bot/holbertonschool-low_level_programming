#include "main.h"
/**
 * print_square - print square based on size
 *
 * @size: determines how large square
 *
 * Returne: void
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	i = 0;
	while (i < size)
	{
		_putchar('#');
		i++;
	}
}
