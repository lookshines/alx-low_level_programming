#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints all possible combination of three digit
*
* Description: prints all combination three digit
* number with , and space
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int l;
	int z;

	i = 48;
	l = i + 1;
	z = l + 1;

	while (i <= 57)
	{
		l = i + 1;
		z = l + 1;
		while (l <= 57)
		{
			z = l + 1;
			while (z <= 57)
			{
				putchar(i);
				putchar(l);
				putchar(z);
				if (i < 55 || l < 56 || z < 57)
				{
					putchar(44);
					putchar(32);
				}
				z++;
			}
			l++;
		}
		i++;
	}
	putchar(10);

	return (0);
}
