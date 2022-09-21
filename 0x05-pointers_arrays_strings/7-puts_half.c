#include "main.h"

/**
 * puts_half - print the last half of a string
 *
 * @s : string to partially printed
 *
 * Return: void
 */
void puts_half(char *s)
{
	int i, l;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	if ((i % 2) == 0)
		l = i / 2;
	else
		l = (i - 1) / 2;

	while (l <= i)
	{
		_putchar(s[l]);
		l++;
	}
	_putchar(10);
}
