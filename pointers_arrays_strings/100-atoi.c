#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer value of the converted string, or 0 if no digits found
 */
int _atoi(char *s)
{
	int i = 0;
	int res = 0;
	int sign = 1;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			res = (res * 10) - (s[i] - '0');
		}
		else if (started)
		{
			break;
		}
		i++;
	}
	if (sign > 0)
	{
		return (-res);
	}
	return (res);
}

