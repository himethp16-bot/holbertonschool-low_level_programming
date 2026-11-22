#include "main.h"
/**
 * check_prime - helper function to check divisibility recursively
 * @n: the number to checl
 * @divisor: the current divisor being tested
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);

	return (check_prime(n, divisor + 1));
}
/**
 * is_prime_number - check if an integer is a prime number
 * @n: the number to evaluate
 *
 * Return: 1 if the input integers is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
