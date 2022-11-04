#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to be printed
 * Return: 0 Always
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	if (n > 1)
	/** Recursion that divide the value by of n by 2*/
		print_binary(n >> 1);

	/**Check if the n is odd or even, even  = 0 and odd = 1*/
	i = n & 1;

	/*Print the i value*/
	_putchar(i + '0');
}
