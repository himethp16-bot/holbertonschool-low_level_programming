#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers from min to max
 * @min: min value
 * @max: max value
 *
 * Return: pointer to the newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	unsigned int i, j;
	int total_size;

	total_size = max - min + 1;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * total_size);

	if (arr == NULL)
		return (NULL);

	i = 0;

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
