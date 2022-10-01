#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array
 * of integers, followed by a new line
 *
 * @a: The pointer to the array
 * @n: The number of element of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");

}
