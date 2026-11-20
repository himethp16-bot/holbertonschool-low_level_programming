#include "main.h"
/**
 * factorial - calculates factorial of a given number
 * @n: integer
 *
 * Return: factorial of given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return n * factorial(n-1);
}
