#include "main.h"

/**
 * print_rev - print in reverse
 *
 * @s : variable to print
 *
 * Return: len
 */
void print_rev(char *s)
{
	int len, i;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	i = len - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar(10);
}
