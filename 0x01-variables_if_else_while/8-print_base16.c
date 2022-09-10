#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints number of base 16
*
* Description: prints all number of base 16 in lower case
* on the same line
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	i = 48;

	while (i <= 102)
	{
		if (i >= 48 && i <= 57)
		{
			putchar(i);
		}
		else if (i >= 97 && i <= 102)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}
