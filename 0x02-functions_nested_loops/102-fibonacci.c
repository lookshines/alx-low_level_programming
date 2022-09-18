#include "stdio.h"

/**
* main - prints the first 50 Fibonacci numbers,
* starting with 1 and 2, followed by a new line
*
* Return: 0
*/
int main(void)
{
	int i, fi1, fi2, sum;

	i = 0;
	fi1 = 0;
	fi2 = 1;

	for (i = 0; i < 50; i++)
	{
		sum = fi1 + fi2;

		printf("%d", sum);

		if (i < 49)
			printf(", ");
		else
			printf("\n");

		fi1 = fi2;
		fi2 = sum;

	}
	return (0);

}
