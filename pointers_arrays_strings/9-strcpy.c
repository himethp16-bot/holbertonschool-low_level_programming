#include "main.h"
/**
 * *_strcpy - copy a string to a destination
 * @dest: is the pointer to the destination for copied string
 * @src: is the pointer to the source string
 *
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
