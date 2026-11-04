#include "main.h"
/**
 * _abs - Returns absolute value of any integerd
 * @r: The integer to check
 *
 * Return: absolute value of all integers
 */

int _abs(int r)
{
	int r;

	if (r < 0)
	{
		return (-r);
	}
	else if (r > 0)
	{
		return (r);
	}
	else
		return (0);
}
