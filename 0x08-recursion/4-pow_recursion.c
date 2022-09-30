#include "main.h"

/**
 * _pow_recursion - function that returns the value
 * of x raised to the power of y
 *
 * @x: the integer to be raised
 * @y: The power.
 *
 * Return: The value of x raised to power of y
 */
int _pow_recursion(int x, int y)
{
	int pow;

	pow = x;
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	pow *= _pow_recursion(x, y - 1);

	return (pow);
}
