#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_c - prints a char
 * @arg: va_list containing the char
 *
 * Return: void
 */
void print_c(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * print_i - prints an integer
 * @arg: va_list containing an integer
 *
 * Return: void
 */
void print_i(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * print_f - prints a float
 * @arg: va_list containing the float
 *
 * Return: void
 */
void print_f(va_list arg)
{
	printf("%f", va_arg(arg, double)):
}
void print_s(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - Prints anything based on a format string.
 * @format: A list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != *(funcs[j].symbol))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
