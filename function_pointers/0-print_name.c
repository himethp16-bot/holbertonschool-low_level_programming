#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - helper function to print name as is
 * @name: pointer to a name
 * @f: pointer to a function
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
