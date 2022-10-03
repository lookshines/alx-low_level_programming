#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two number
 *
 * @argc: number of arguments to program
 * @argv: argument to program
 *
 * Return: 0 for successful
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);

}
