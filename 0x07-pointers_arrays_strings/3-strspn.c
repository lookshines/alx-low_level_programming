#include "main.h"

/**
 * *_strspn - get the length of a prefix substring
 *
 * @s: pointer to a string
 * @accept: pointer to a string
 *
 * Return: unsigned int
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				length++;
				break;
			}
		}

		if (s[i] == ' ')
		{
			break;
		}
	}

	return (length);
}
