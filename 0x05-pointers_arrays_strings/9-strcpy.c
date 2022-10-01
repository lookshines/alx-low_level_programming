#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * to another pointer dest
 *
 * @dest: The buffer to copy string to
 * @src: The source to copy
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
