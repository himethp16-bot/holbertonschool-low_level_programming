#include <stdio.h>
/**
 * sum - addition of two integers
 * Return: Always 0
 */
void sum(void)
{
	int A, B, sum;

	printf("Enter two integers, A: B:\n");
	scanf("%d %d", &A, &B);
	sum = A + B;
	printf("%d + %d = %d\n", A, B, sum);
}
/**
 * sub - subtraction of two integers
 *
 * Return: Always 0
 */
void sub(void)
{
	int A, B, sub;

	printf("Enter two integers, A: B:\n");
	scanf("%d %d", &A, &B);
	sub = A - B;
	printf("%d - %d = %d\n", A, B, sub);
}
/**
 * prod - multiplication outcome of two integers
 *
 * Return: Always 0
 */
void prod(void)
{
	int A, B, prod;

	printf("Enter two integers, A: B:\n");
	scanf("%d %d", &A, &B);
	prod = A * B;
	printf("%d x %d = %d\n", A, B, prod);
}
/**
 * div - divides two provided integers
 *
 * Return: Always 0
 */
void div(void)
{
	float A, B, div;

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
	if (option < 0 || option > 4)
	{
		printf("Invalid Choice\n");
	}
	else if (option == 0)
	{
		printf("Bye!\n");
	}
	else if (option == 1)
	{
		sum();
	}
	else if (option == 2)
	{
		sub();
	}
	else if (option == 3)
	{
		prod();
	}
	else if (option == 4)
	{
		div();
	}
	return (0);
}
