#include "main.h"
/**
 * *string_toupper - converts characters of string from lowercase to uppercase
 * @s: pointer to a string
 *
 * Return: string converted to uppercase
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
