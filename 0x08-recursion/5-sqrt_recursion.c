#include "main.h"

/**
 * find_sqrt - finds the natural square root of an inputted number.
 *
 * @num: The inumber to find the square root of.
 * @root: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	else if (root * root > num)
		return (-1);
	else
		return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - function that returns the
 * natural square root of a number
 *
 * @n: the integer to find the square root
 *
 * Return: The square root of n
 */

int _sqrt_recursion(int n)
{
	int root;

	root = 0;
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (find_sqrt(n, root));
}
