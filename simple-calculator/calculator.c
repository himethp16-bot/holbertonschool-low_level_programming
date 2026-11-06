#include <stdio.h>
/**
 * main - Entry point
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

	if (option == 0)
		printf("Bye!\n");

	return (0);
}
