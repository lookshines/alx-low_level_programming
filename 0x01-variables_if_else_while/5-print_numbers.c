#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints all digit of base 10
*
* Description: prints all digits of base 10 starting from 0
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
		i++;
	}
	putchar(10);

	return (0);
}
