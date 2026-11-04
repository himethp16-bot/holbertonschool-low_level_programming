#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';
	char ch = 'A';
	
	while (ch <= 'z')
	{
		putchar(ch);
		ch++
	}
	
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++
	}

	putchar('\n');
	return (0);
}
