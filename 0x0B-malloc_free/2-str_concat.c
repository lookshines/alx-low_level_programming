#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: one of the string to concatenates
 * @s2: second string to concatenates
 *
 * Return: if concatenation fails - NULL
 *	otherwise - a pointer to new allocates space in
 *		memory containing the conccatenated string
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat_i, len;

	concat_i = 0;
	len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;


	concat_str = malloc(sizeof(char) * len);


	if (concat_str == NULL)
		return (NULL);


	for (i = 0; s1[i]; i++)
		concat_str[concat_i++] = s1[i];


	for (i = 0; s2[i]; i++)
		concat_str[concat_i++] = s2[i];


	return (concat_str);
}
