#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
 * print_number - prints a signed integer using putchar
 * @n: integer to print
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = (unsigned int)(-(n + 1)) + 1U;
	}
	else
	{
		num = (unsigned int)n;
	}
	print_u(num);
}

/**
 * main - multiplies two numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	const char *err = "Error\n";

	if (argc != 3)
	{
		while (*err != '\0')
		{
			_putchar(*err);
			err++;
		}
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	print_number(result);
	_putchar('\n');

	return (0);
}
