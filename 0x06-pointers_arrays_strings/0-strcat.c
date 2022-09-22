#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: 1st string
 * @src: 2nd string
 *
 * Return: char
 *
 */
char *_strcat(char *dest, char *src)
{
	int i, l;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	l = 0;
	while (src[l] != '\0')
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (dest);
}
