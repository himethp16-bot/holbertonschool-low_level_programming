#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of integers to be passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		str = va_arg(args, const char *)
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", str);
		i++;
		
		if (separator != NULL && i < n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
