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
	int i;

	int sum = 0;

	if n == 0
		return (0);

		va_list args;

		va_start(args, n);

		i = 0;

		while (i < n)
		{
			sum += va_arg(list, int);
			i++;
		}
		va_end(list);
		return (sum);
}
