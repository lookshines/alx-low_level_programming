#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 *
 * @n: the integer to find the factorial
 *
 * Return: the factorial of a number
 */
int factorial(int n)
{
	int fac;

	fac = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);

	fac *= factorial(n - 1);

	return (fac);
}
