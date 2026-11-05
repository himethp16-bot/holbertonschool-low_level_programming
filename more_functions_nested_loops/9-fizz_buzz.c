#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
			i++;
		}
		if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
			i++;
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
			i++;
		}
		else
		{
			printf("%d ", i);
			printf(" ");
			i++;
		}
	}
	return (0);
}
