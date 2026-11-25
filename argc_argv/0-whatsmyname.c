#include "main.h"
/**
 * main - prints its name followed by a new line
 * @argc: count of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argc;
	i = 0;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
