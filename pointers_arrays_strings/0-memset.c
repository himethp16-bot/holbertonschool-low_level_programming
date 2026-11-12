#include "main.h"
/**
 * *_memset - fills memory with assigned character n times
 * @s: pointer to a string
 * @b: character to replace allocated data
 * @n: how many bytes to be replaced
 *
 * Return: back to original pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
