#include "main.h"

/**
 * print_square - function print a square followed by a new line
 *
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i, l;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (l = 0; l < size; l++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
