#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int option;
	int A, B, sum;

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
	if (option == 1)
	{
		printf("Enter two integers, A: B:\n");
		scanf("%d %d", &A, &B);
		sum = A + B;
		printf("%d + %d = %d", A, B, sum);
	}
	return (0);
}
