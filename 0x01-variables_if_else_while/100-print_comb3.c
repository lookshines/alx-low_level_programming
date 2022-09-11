#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints all combination of two digit
*
* Description: prints all combination two digit
* number with , and space
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int l;

	i = 48;
	l = i + 1;

	while (i <= 57)
	{
		l = i + 1;
		while (l <= 57)
		{
			putchar(i);
			putchar(l);
			if (i < 57 || l < 57)
			{
				putchar(44);
				putchar(32);
			}
			l++;
		}
		i++;
	}
	putchar(10);

	return (0);
}
