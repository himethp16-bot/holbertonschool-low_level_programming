#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to dup str or NULL if str is NULL or if memory unavailable
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len;

	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i <= len)
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
