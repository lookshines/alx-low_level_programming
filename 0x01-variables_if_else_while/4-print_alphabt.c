#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints all alphabet except q and e
*
* Description: prints all alphabet in lower case except for q and e
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	i = 97;

	while (i <= 122)
	{
		if(i != 101 && i != 113)
			putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
