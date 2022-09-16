#include "main.h"

/**
* print_times_table - print the times table of an integer
* @n: the integer multiplation table
*
* Return: void
*/
void print_times_table(int n)
{
	int i, mul, result;

	if (n > 0 && n <= 15)
	{
		for (mul = 0; mul <= n; mul++)
		{
			_putchar(48);
			i = 1;
			while (i <= n)
			{
				_putchar(44);
				_putchar(32);

				result = mul * i;

				if (result < 10)
					_putchar(32);
				if (result < 100)
					_putchar(32);

				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
				}
				else if (result < 100 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
				i++;
			}
			_putchar(10);
		}
	}
}
