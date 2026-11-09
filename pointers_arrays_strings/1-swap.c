#include "main.h"
/**
 * swap_int - Swaps the values of the integer of the two pointers
 * @a: pointer to an int
 * @b: pointer to an int
 *
 * Return: void
 */

void swap_int(int *a, int *b);
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
