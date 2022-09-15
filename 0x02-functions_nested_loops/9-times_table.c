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
			if (result < 10)
				_putchar('0' + result);
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (i < 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			i++;
		}
		_putchar(10);
	}
}
