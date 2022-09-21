#include "main.h"

/**
 * puts2 - print every other character in a string
 * start with the first character
 *
 * @s : string to reverse
 *
 * Return: void
 */
void puts2(char *s)
{
	int i, l;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	i--;
	l = 0;
	while (l <= i)
	{
		_putchar(s[l]);
		l++;
		l++;
	}
	_putchar(10);
}
