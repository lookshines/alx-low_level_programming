#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 *
 * @array: array of elements
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: index of first element that is an interger
 *	   -1 if no integer is found in the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
