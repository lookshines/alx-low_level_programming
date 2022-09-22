#include "main.h"

/**
 * cap_string - Capitalize all words
 *
 * @str: string
 *
 * Return: void
 */
char *cap_string(char *str)
{
	int i, l;
	int indicator;
	char special[] = ",;.!?(){}\n\t\" ";

	i = 0;
	indicator = 0;
	while (str[i] != '\0')
	{
		if (str[0] > 96 && str[0] < 123)
			indicator = 1;

		l = 0;
		while (special[l] != '\0')
		{
			if (special[l] == str[i])
				indicator = 1;

			l++;
		}

		if (indicator)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				indicator = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				indicator = 0;
			else if (str[i] > 47 && str[i] < 58)
				indicator = 0;
		}
		i++;
	}

	return (str);
}
