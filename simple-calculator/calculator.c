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
 * prod - multiplication outcome of two integers
 * @option: finds user input
 *
 * Return: Always 0
 */
void prod(int option)
{
	int A, B, prod;

	if (option == 3)
	{
		printf("Enter two integers, A: B:\n");
		scanf("%d %d", &A, &B);
		prod = A * B;
		printf("%d x %d = %d\n", A, B, prod);
	}
}
/**
 * div - divides two provided integers
 * @option: checks for user input
 *
 * Return: Always 0
 */
void div(int option)
{
	float A, B, div;

	if (option == 4)
	{
		printf("Enter two integers, A: B:\n");
		scanf("%f %f", &A, &B);
		if (B == 0)
		{
			printf("Error: division by zero\n");
			return;
		}
		else
		div = A / B;
		printf("%.0f / %.0f = %.2f\n", A, B, div);
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
	prod(option);
	div(option);

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
