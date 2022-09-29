#include "main.h"

/**
 * _strlen_recursion - function that prints a string in reverse.
 *
 * @s: The string to be counted
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
