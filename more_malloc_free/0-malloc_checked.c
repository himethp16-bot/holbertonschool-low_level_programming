#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocate memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocaed memory or exxits with status 98 if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
