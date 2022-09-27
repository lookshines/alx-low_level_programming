#include "main.h"

/**
 * *_strstr - function that locates a substring
 *
 * @haystack: string to be search
 * @needle: sub string to be search for
 *
 * Return: char
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
		}

		if (needle[j] == '\0')
			return (&haystack[i]);

	}

	return ('\0');
}
