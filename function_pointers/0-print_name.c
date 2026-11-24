#include "function_pointers.h"
#include <stddef.h>
/**
 * print_normal - helper function to print name as is
 * @name: pointer to a name
 *
 * Return: Void
 */
void print_normal(char *name)
{
	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
}
/**
 * print_uppercase - print name fully uppercase
 * @name: pointer to a name
 *
 * Return: Void
 */
void print_uppercase(char *name)
{
	while (*name != '\0')
	{
		if (*name >= 'a' && <= 'z')
		{
			_putchar(*name - 32);
		}
		else
		{
			_putchar(*name);
		}
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
