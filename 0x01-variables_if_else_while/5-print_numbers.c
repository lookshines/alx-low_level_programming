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

	i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}
