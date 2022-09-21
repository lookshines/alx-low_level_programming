#include "main.h"
#include <stdio.h>

/**
 * main - largest prime number
 *
 * Return: always 0
 */
int main(void)
{
	long i, l, prime;

	prime = 612852475143;
	i = 11;
	l = i;
	while (i <= prime)
		if (!(i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0))
			if (!(i % 11 == 0 || i % 13 == 0 || i % 17 == 0 || i % 19 == 0))
				l = i;
	printf("%ld\n", l);

	return (0);
}
