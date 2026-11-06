#include <stdio.h>
/**
 * sum - addition of two integers
 * @option: checks user input
 * Return: Always 0
 */
void sum(int option)
{
	int A, B, sum;

	if (option == 1)
	{
		printf("Enter two integers, A: B:\n");
		scanf("%d %d", &A, &B);
		sum = A + B;
		printf("%d + %d = %d\n", A, B, sum);
	}
}
/**
 * sub - subtraction of two integers
 * @option: checks user input
 *
 * Return: Always 0
 */
void sub(int option)
{
	int A, B, sub;

	if (option == 2)
	{
		printf("Enter two integers, A: B:\n");
		scanf("%d %d", &A, &B);
		sub = A - B;
		printf("%d - %d = %d\n", A, B, sub);
	}
}
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int option;

	printf("Simple Calculator\n"
		"1) Add\n"
		"2) Subtract\n"
		"3) Multiply\n"
		"4) Divide\n"
		"0) Quit\n");
	printf("Choose an option?\n");

	scanf("%d", &option);
	sum(option);
	sub(option);

		if (option < 0 || option > 4)
		{
			printf("Invalid Choice\n");
		}
		else if (option == 0)
		{
			printf("Bye!\n");
		}
	return (0);
}
