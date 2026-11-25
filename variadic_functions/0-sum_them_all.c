#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that sums all parameters
 * @n: last known int
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	
	
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);

	i = 0;

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(list);
	return (sum);
}
