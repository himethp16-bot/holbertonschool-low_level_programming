#include "main.h"
/**
 * *_strncpy - copy a string to a destination based on n
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: input value
 *
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (dest);
}
