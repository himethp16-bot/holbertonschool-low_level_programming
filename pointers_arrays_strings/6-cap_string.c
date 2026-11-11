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
	int cap_word = 1;
	char separators[] = "\t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (str[i] == separators[])
		{
			cap_word = 1;
		}
		else if (cap_word && (str[i] >= 'a' && str[i] <= 'z'))
		{
			cap_word = 0;
		}
		else
		{
			cap_word = 0;
		}
	}
	return (str);
}
