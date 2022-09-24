#include "main.h"
#include <stdio.h>

/**
 * print_number - funtion that print an integer
 *
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
