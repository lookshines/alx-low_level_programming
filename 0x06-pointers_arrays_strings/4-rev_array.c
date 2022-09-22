#include "main.h"

/**
 * reverse_array - compares two strings
 *
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, h;

	i = 0;
	while (i < (n / 2))
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;

		i++;
	}

}
