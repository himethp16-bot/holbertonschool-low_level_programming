#include "function_pointers.h"
/**
 * int_index - searches for an int in an array
 * @array: Pointer to an array of ints
 * @size: size of said array
 * @cmp: pointer to a func used to comapare values
 *
 * Return: Index of the first element for which cmp does not return 0, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	i = 0;

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
