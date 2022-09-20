#include "main.h"

/**
 * _isdigit - check for a digit
 *
 * @c: int to check if digit
 *
 * Return: 1 if uppercase, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
