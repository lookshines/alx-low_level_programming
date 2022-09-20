#include "main.h"

/**
 * _isupper - check for uppercase character.
 *
 * @c: int to check if uppercase
 *
 * Return: 1 if uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	else
		return (0);
}
