#include "main.h"
/**
 * main - prints number of arguments followed by a new line
 * @argc: count of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argv;
	i = 0;

	while (i < argc)
	{
		_putchar(argc);
		i++;
	}
	_putchar('\n');
	return (0);
}
