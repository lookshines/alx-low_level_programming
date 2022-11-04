#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 *	       need to flip to get from one number to another
 * @n: the number to be flip
 * @m: The number to flip n to
 * Return: The number bits to flip 
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, bit_num = 0;

	while (flip > 0)
	{
		bit_num += (flip & 1);
		flip >>= 1;
	}

	return (bit_num);
}
