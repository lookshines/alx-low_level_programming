#include <stdio.h>
/**
 * main - program that all argumeent it receives
 *
 * @argc: number of arguments to program
 * @argv: argument to program
 *
 * Return: 0 for successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
