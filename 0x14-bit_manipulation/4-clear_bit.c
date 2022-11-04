#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: is the index location of the bit to change
 * Return: 1 if it worked
 *	   -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/*Check if wrong index value was provided based on  8bits*/
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/*Clear a bit at the index form the right*/
	*n &= ~(1 << index);

	return (1);
}
