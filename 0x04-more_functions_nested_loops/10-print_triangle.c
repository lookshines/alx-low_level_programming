#include "main.h"

/**
 * print_triangle - function print a triange followed by a new line
 *
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, l, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			j = size - (i + 1);
			for (l = j; l > 0; l--)
			{
				_putchar(32);
			}
			k = 0;
			while (k <= i)
			{
				_putchar(35);
				k++;
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
