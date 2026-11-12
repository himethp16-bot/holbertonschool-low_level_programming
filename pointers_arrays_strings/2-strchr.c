#include "main.h"
/**
 * *_strchr - finds first occurrence of c in string s
 * @s: pointer to a string
 * @c: character to be found
 *
 * Return: Void
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (0);
}
