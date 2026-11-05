#include "main.h"
/**
 * print_line - will print line based on n
 *
 * @n: determines how long line will be
 *
 * Return: void
 */
void print_line(int n)
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
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
