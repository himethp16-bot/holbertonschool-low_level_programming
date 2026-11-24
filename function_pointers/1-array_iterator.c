#include "function_pointers.h"
/**
 * array_iterator - iterate through an array
 * @array: pointer to an array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	int i;

	i = 0;

	while (i < size)
	{
		action[i];
		
	}
	i++;
}
