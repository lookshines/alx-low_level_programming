#include "main.h"

/**
* print_times_table - print the times table of an integer
*
* @n: the integer multiplation table
*
* Return: void
*
*/
void print_times_table(int n)
{
	int i, mul, result;

	if (n <= 15 && n > 0)
	{
		for (mul = 0; mul <= n; mul++)
		{
			i = 0;
			while (i <= n)
			{
				result = mul * i;
				if (result == 0 && i == 0)
					_putchar('0' + result);
				else if (result < 10)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(32);
					_putchar('0' + result);
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar(44);
					_putchar(32);
					_putchar(((result / 10) / 10) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
				i++;
			}
			_putchar(10);
		}
	}
}
