#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints all alphabet in both lower and upper case
*
* Description: prints all alphabet in lower case and upper case
* on the same line
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int n;

	i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}

	n = 65;

	while (n <= 90)
	{
		putchar(n);
		n++;
	}

	putchar(10);

	return (0);
}
