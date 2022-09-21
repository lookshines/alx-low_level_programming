#include "main.h"

/**
 * rev_string - print in reverse
 *
 * @s : string to reverse
 *
 * Return: len
 */
void rev_string(char *s)
{
	int i, j, k;
	char temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	j = i;
	k = 0;
	i--;
	while (k < j / 2)
	{
		temp = s[k];
		s[k] = s[i];
		s[i] = temp;
		k++;
		i--;
	}
}
