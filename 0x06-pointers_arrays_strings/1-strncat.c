#include "main.h"

/**
 * *_strncat - concatenates two strings based on n characters
 *
 * @dest: 1st string
 * @src: 2nd string
 * @n: number of characters
 *
 * Return: dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
