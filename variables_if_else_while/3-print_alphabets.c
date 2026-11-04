#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;

	while (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	while (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
