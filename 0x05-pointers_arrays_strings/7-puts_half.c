#include "main.h"

/**
 * puts_half - print the last half of a string
 *
 * @str : string to partially printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, l, n;

	i = 0;
	l = 0;
	while (str[i] != '\0')
	{
		l++;
		i++;
	}

	if ((l % 2) == 0)
		n = l / 2;
	else
		n = (l + 1) / 2;

	i = n;
	while (i < l)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
