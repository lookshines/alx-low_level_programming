#include "main.h"

/**
 * *_strncpy - copies a string
 *
 * @dest: 1st string
 * @src: 2nd stringi
 * @n: number of character to copy
 *
 * Return: char
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}


	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
