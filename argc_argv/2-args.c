#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: count of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	i = 0;

	while (i < argc)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
			_putchar(argv[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
