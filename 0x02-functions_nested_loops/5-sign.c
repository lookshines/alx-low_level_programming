#include "main.h"

/**
* print_sign - check if the number is positive, negative
* or zero and print the sign
*
* @i: - is the number to be checked
*
* Return: 1 if the number is positve, 0 if it is zero
* -1 if it is negative.
*
*/
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (i == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
