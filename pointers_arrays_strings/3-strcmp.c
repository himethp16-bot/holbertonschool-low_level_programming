#include "main.h"
/**
 * _strcmp - compares two string and returns value depending on whether one is greater, lesser or they are equal
 * @s1: string one
 * @s2: string two
 *
 * Return: difference between s1 and s2
 */
int _strcmp(char *s1, char *s2);
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
