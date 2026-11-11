#include "main.h"
/**
 * *leet - changes letters to numbers
 * @str: pointer to a string
 *
 * Return: string with letters converted to numbers
 */
char *leet(char *str);
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	i = 0;

	while (str[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
