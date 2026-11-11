#include "main.h"
/**
 * *string_toupper - converts characters of string from lowercase to uppercase
 * @*: pointer to a string
 *
 * Return: string converted to uppercase
 */
char *string_toupper(char *);
{
	int i; 

	i = 0;

	while (*[i] != '\0')
	{
		i++;
		if (*[i] >= 'a' && *[i] <= 'z')
		{
			*[i] = *[i] - 32;
		}
	}
}
