#include "main.h"
/**
 * times_table - produce full 9 times table
 *
 * Return: void
 *
 */

void times_table(void)
{
	int row;
	int col;
	int prod;

	row = 0;
	while (row <= 9)
	{
		_putchar('0');

		col = 1;
		while (col <= 9)
		{
			prod = col * row;
			_putchar(',');
			_putchar(' ');
			if (prod <= 9)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
		col++;
		}
		_putchar('\n');
		row++;
	}
}
