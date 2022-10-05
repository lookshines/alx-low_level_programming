#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memor
 *	contains a copy of the string given as a parameter
 *
 * @str: the string to be copied
 *
 *
 * Return: if str = NULL or not enough memory - NULL
 *	otherwise - a pointer to new array..
 *
 */
char *_strdup(char *str)
{
	char *newspace;
	int i, len;

	len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	newspace = malloc(sizeof(char) * (len + 1));

	if (newspace == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		newspace[i] = str[i];

	return (newspace);
}
