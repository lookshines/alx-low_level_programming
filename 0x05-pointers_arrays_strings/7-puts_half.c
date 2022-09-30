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
	int i, l;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	i++;
	if (i % 2 == 0)
		l = i / 2;
	else
		l = (i - 1) / 2;

	while (l < i)
	{
		_putchar(str[l]);
		l++;
	}
	_putchar(10);
}
