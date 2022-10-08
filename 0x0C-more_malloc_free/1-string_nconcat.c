#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * @n: The number of byte of s2 to concatenate
 *
 * Return: If fails - NULL
 *         Otherwise - a pinter to the memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *join;
	unsigned int len, i;

	len = n;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	join = malloc(sizeof(char) * (len + 1));

	if (join == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		join[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		join[len++] = s2[i];

	return (join);
}
