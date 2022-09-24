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
	int mul, num, i;

	if (n < 0)
	{
		_putchar('-');
		num = -1 * n;
	}
	else
		num = n;


	mul = 10;
	while ((num / mul) > 0)
		mul *= 10;


	i = 1;
	while (i > 0)
	{
		if (mul == 10)
		{
			_putchar(num % mul + '0');
			i = -1;
		}
		else
		{
			_putchar((num / (mul / 10)) + '0');
			mul /= 10;


			while (mul > 10)
			{
				_putchar((num / (mul  / 10)) % 10 + '0');
				mul /= 10;
			}
			
			i = 1;
		}
	}
}
