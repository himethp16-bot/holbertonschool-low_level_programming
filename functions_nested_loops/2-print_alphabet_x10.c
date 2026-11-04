#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase
 *
 * return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	i = 0;
	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
