#include "main.h"
/**
 * print_number - prints number
 * @n: int to be printed
 *
 */
void print_number(int n)
{
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
/**
 * main - prints number of arguments followed by a new line
 * @argc: count of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	print_number(argc - 1);
	_putchar('\n');
	return (0);
}
