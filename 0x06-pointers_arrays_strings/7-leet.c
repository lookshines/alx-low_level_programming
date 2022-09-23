#include "main.h"

/**
 * *leet - encodes string
 *
 * @s: string
 *
 * Return: char
 */
char *leet(char *s)
{
	int i, l;
	char *m = "aeotl";
	char *M = "AEOTL";
	int x[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (l = 0; l < 5; l++)
		{
			if (s[i] == m[l] || s[i] == M[l])
				s[i] = x[l];
		}
	}

	return (s);
}
