#include "main.h"
/**
 * _pow_recursion - calculates power utilising recursion
 * @x: integer representing base
 * @y: int representing exponent
 *
 * Return: value x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (base * _pow_recursion(x, y - 1));
}
