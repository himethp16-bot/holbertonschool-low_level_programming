#include "main.h"
/**
 * more_numbers - prints numbers 0-14 10x
 *
 * Return: Void
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = '0';
		while (j <= '14')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
