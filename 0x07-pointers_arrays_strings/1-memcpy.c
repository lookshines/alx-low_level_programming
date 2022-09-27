#include "main.h"

/**
 * *_memcpy - fils memory with a constant byte
 *
 * @dest: the memory area
 * @src: constant byte
 * @n: bytes from memory area
 *
 * Return: char
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (s);
}
