#include "main.h"

/**
* times_table - print the 9 times table
*
* Return: void
*
*/
void times_table(void)
{
	int i, mul, result;

	for (mul = 0; mul < 10; mul++)
	{
		i = 0;
		while (i < 10)
		{
			result = mul * i;
			if (result == 0 && i == 0)
				_putchar('0' + result);
			else if (result < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar('0' + result);
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			i++;
		}
		_putchar(10);
	}
}
