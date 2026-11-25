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
	printf("%f", va_arg(arg, double));
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
	char *sep = "";
	char types[] = {'c', 'i', 'f', 's', '\0'};
	void (*funcs[])(va_list) = {print_c, print_i, print_f, print_s};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (types[j])
		{

			if (format[i] == types[j])
			{
				printf("%s", sep);
				funcs[j](args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
