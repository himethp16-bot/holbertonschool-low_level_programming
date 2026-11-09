#include "main.h"
#include <stdio.h>
/**
 *
 */
void print_array(int *a, int n)
{
	int i; 

	i = 0;

	while (i < n)
	{
		printf("a[%d], ", i, a[i]);
		i++;
	}
}
