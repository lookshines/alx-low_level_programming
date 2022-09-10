#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints all sigle digit number
*
* Description: prints all sigle digits number seperating each
* number with , and space
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);

	return (0);
}
