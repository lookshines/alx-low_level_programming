#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: min integer value of the array
 * @max: max integer value of the array
 *
 * Return: if min is greater than man return NULL
 *	   if malloc fails, return NULL
 *	   otherwise return array
 */
int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		array[i] = min++;
		i++;
	}

	return (array);
}
