#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 *
 * @c: string
 *
 * Return: void
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] > 96 && c[i] < 123)
			c[i] -= 32;


		i++;
	}

	return (c);
}
