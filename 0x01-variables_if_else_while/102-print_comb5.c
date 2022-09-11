#include <stdio.h>

/**
* main - prints all possible combination of two two-digits number
*
* Description: prints all combination two two-digits numbers
* number with , and space
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int l;
	int y;
	int z;

	i = 48;
	while (i <= 57)
	{
		l = 48;
		while (l <= 57)
		{
			y = i;
			z = l + 1;
			while (y <= 57)
			{
				while (z <= 57)
				{
					putchar(i);
					putchar(l);
					putchar(32);
					putchar(y);
					putchar(z);
					if (i < 57 || l < 56 || y < 57 || z < 57)
					{
						putchar(44);
						putchar(32);
					}
					z++;
				}
				z = 48;
				y++;
			}
			l++;
		}
		i++;
	}
	putchar(10);

	return (0);
}
