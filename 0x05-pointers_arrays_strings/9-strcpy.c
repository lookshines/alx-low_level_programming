#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * to another pointer dest
 *
 * @dest: The buffer to copy string to
 * @src: The source to copy
 *
 * Return: copied outputi 
 */

char *_strcpy(char *dest, char *src)
{
	int i, n;

	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
