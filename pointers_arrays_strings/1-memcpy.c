#include "main.h"
/**
 * *_memcpy - copies memory to n amount of bytes
 * @dest: pointer to destinationg string
 * @src: pointer to source string
 * @n: amount of bytes to be copied
 *
 * Return: destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
