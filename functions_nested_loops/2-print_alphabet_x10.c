#include "main.h"
/**
 * print_alpabet_x10 - print alphabet 10 times all lowercase
 *
 * return - void
 */
void print_alphabet_x10(void);
{
	int i = 0, _putchar, print_alphabet

	while (i < 11)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n')
		i++;
	}
}
