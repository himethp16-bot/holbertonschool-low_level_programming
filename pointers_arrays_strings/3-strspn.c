#include "main.h" 
/**
 * _strspn - measures the length of the string up to the first match
 * @s: pointer to a string 
 * @accept: pointer to a string to be compared
 *
 * Return: Count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count, match;

	i = 0;
	count = 0;

	while (s[i] != '\0')
	{
		match = 0;
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept [j])
			{
				match = 1;
				break;
			}
			j++;
		}
		if (!match)
		{
			return (count);
		}
		count++;
		i++;
	}
	return (count);
}
