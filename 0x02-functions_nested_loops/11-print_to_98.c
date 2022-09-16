#include <stdio.h>

/**
* print_to_98 - adds two integers and returns the result
*
* @n: input integer
*
* Return: result
*
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);

		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}

}
