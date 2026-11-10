#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @n: number of integers to revers
 * @a: pointer to an array of integers
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int start;
	int end;
	int temp;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
