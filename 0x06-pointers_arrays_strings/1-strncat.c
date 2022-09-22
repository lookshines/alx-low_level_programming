#include "main.h"

/**
 * *_strincat - concatenates two strings based on n characters
 *
 * @dest: 1st string
 * @src: 2nd string
 * @n: number of characters
 *
 * Return: char
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, l;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	l = 0;
	while (src[l] != '\0' && n > 0)
	{
		dest[i] = src[l];
		i++;
		l++;
		n--;
	}
	return (dest);
}
