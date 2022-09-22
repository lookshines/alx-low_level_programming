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

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
