#include "function_pointers.h"
#include "main.h"
#include <stddef.h>
/**
 * print - helper function to print name using _putchar
 * @name: pointer to a name
 *
 * Return: Void
 */
void print(char *name)
{
	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
}
/**
 * print_name - prints name
 * @name: Pointer to a name
 * @f: pointer to a function that returns a char
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
