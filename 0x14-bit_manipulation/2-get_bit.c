#include "main.h"

/**
 * get_bit - function that prints the binary representation of a number
 * @n: number which bit is to be determined
 * @index: is the index location of the bit to return
 * Return: value of the bit at index
 *	   -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*Check if wrong index value was provided based on  8bits*/
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Divide n by 2 to the power of index then check if it odd or even*/
	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
