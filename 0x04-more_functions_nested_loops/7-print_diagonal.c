#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: number of times the lines will printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, l;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (l = 0; l <= i; l++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
	_putchar(10);
}
