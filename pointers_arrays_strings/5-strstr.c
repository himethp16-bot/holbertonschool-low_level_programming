#include "main.h"
/**
 * *_strstr - Locates a substring within a string
 * @haystack: the string to search inside
 * @needle: the substring to look for 
 *
 * Return: pointer to the beginning of the located substring or 0 if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}

	i = 0;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] != '\0')
		{
			if (haystack [i + j] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return (0);
}
		
		
