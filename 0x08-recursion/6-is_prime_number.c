#include "main.h"

/**
 * divisor - check if a number is divisible
 *
 * @num: The number to be checked
 * @div: The divisor
 *
 * Return: If the number is divisible - 0
 *	if the number is not divisible - 1
 *
 */
int divisor(int num, int div)
{
	if (num % div == 0)
		return (0);
	else if (div == num / 2)
		return (1);

	return (divisor(num, div + 1));
}

/**
 * is_prime_number - checks if a number prime
 *
 * @n: The number to be checked
 *
 * Return: If the nubmer is a prime - 1
 *	if the number is not prime - 0
 *
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (divisor(n, div));
}
