#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (success)
*/

int main(void)
{
	char c;
	int i;
	float f;

	printf("Size of a char: %u.\n", (unsigned)sizeof(c));
	printf("Size of an int: %u.\n", (unsigned)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long long int: %llu.\n", (unsigned long long)sizeof(i));
	printf("Size of a float: %u.\n", (unsigned)sizeof(f));
	return (0);
}
