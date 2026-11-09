#include "main.h"
/**
 * rev_string - Reverses a string in its place
 * @s: Pointer to a string
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	if (s == NULL)
	{
		return (0);
	}

	while (s[len] != '\0')
	{
		len++;
	}

	i = 0;

	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
		i++;
	}
}
