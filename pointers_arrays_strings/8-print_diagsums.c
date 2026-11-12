#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals in a matrix
 * @a: pointer to an array
 * @size: an array of numbers
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum = 0, a = 0;

	if (a == size)
	{
		i  = 0;

		while (i < a)
		{
			j = 0;

			while (j < size)
			{
				printf(" %d", [i][j]);
				j++;
			}
			printf("\n");
			i++;
		}
		i = 0;

		while (i < m)
		{
			sum = sum + [i][i];
			a = a + [i][m - i -1];
			i++;
		}
		printf("%d, %d", sum, a);
	}
}
