#include <stdio.h>
#include "main.h"
/**
 * print_error - prints "Error\n" using putchar
 */
void print_error(void)
{
	const char *err = "Error\n";

	while (*err != '\0')
	{
		_putchar(*err);
		err++;
	}
}

/**
 * print_u - prints an unsigned integer using putchar
 * @num: unsigned integer to print
 */
void print_u(unsigned int num)
{
	if (num >= 10)
	{
		print_u(num / 10);
	}
	_putchar((num % 10) + '0');
}

/**
 * main - adds positive numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j;
	int num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] == '\0')
		{
			print_error();
			return (1);
		}

		num = 0;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				print_error();
				return (1);
			}
			num = num * 10 + (argv[i][j] - '0');
		}
		sum += num;
	}

	print_u((unsigned int)sum);
	_putchar('\n');

	return (0);
}
