#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints all alphabet
*
* Description: prints all alphabet in lower case
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
