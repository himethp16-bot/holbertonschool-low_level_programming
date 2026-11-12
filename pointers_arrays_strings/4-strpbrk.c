#include "main.h"
/**
 * *_strpbrk - finds 1st char in 1st string that matches the 2nd
 * @s: the string to be scanned
 * @accept: pointer to string to be matched
 *
 * Return: void
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (0);
}
