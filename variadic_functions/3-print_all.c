#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * struct printer - Maps a format specifier to its print function.
 * @symbol: The format character ('c', 'i', 'f', 's').
 * @print: Function pointer that prints the corresponding va_list argument.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
}printer_t;

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
void print_string(va_list arg)
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
	printer_t funcs[] =
	{
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);
	while (format && format [i])
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
