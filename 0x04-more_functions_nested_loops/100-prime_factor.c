#include "main.h"
#include <stdio.h>

/**
 * main - largest prime number
 *
 * Return: always 0
 */
int main(void)
{
	long i, prime;

	prime = 612852475143;
	i = 1;
	while (i <= prime / 2)
		if (prime % i == 0)
			prime = prime / i;
		else
			i += 2;

	printf("%ld\n", prime);

	return (0);
}
