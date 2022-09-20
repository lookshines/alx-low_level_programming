#include "main.h"

/**
 * more_numbers - function that prints 10 times the number
 * from 0 to 14, followed by a new line
 *
 *  * Return: void
 */
void more_numbers(void)
{
	int i, l;

	l = 0;
	while (l < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i < 10)
				_putchar('0' + i);
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
		_putchar(10);
		l++;
	}
}
