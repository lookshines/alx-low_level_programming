#include "main.h"

/**
* print_last_digit - print the last digit of a number
*
* @i: - is a signed integer
*
* Return: last digit
*
*/
int print_last_digit(int i)
{
	int last;
	
	last = i % 10;
	if (i < 0)
	{
		last = last * -1;
		_putchar(last + '0');
		return (last);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}
