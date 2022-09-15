#include "main.h"

/**
* jack_bauer - prints every minute of the day
*
*
* Return: last digit
*
*/
void jack_bauer(void)
{
	int min_unit, min_tens, hour_unit, hour_tens, hour_unit_max;

	hour_tens = 48;
	for (; hour_tens < 51; hour_tens++)
	{
		if (hour_tens < 50)
			hour_unit_max = 58;
		else
			hour_unit_max = 52;
			
		for (hour_unit = 48; hour_unit < hour_unit_max; hour_unit++)
		{
			
			for (min_tens = 48; min_tens < 54; min_tens++)
			{
				min_unit = 48;
				while (min_unit < 58)
				{
					_putchar(hour_tens);
					_putchar(hour_unit);
					_putchar(58);
					_putchar(min_tens);
					_putchar(min_unit);
					_putchar(10);
					min_unit++;
				}
			}
		}
	}
}
