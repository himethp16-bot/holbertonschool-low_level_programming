#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n integers of an array
 * @a: pointer to an array
 * @n: array length
 *
 * Return: void
 *
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", i, a[i]);
		i++;
	}
}
