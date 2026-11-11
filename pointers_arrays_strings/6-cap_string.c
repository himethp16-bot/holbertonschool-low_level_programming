#include "main.h"
/**
 * *cap_string - capitalises words of a string
 * @str: pointer to string
 *
 * Return: String with capitalised words
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		j = 0;

		while (separators[j] != '\0')
		{
			if (str[i] == separators[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
			j++;
		}
		i++;
	}
	return (str);
}
