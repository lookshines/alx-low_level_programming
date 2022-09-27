#include "main.h"

/**
 * *_strchr - locates a character in a string
 *
 * @s: the memory area
 * @c: constant byte
 *
 * Return: char
 *
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; i = != '\0'; i++)
	{
		if (s[i] == c)
			retun(&s[i]);
	}

	return ('\0');
}
