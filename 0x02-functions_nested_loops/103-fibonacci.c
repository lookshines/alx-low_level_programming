#include "stdio.h"

/**
* main - prints the first 50 Fibonacci numbers,
* starting with 1 and 2, followed by a new line
*
* Return: 0
*/
int main(void)
{
	int i;
	long fi1, fi2, curfi, sum;

	i = 0;
	fi1 = 0;
	fi2 = 1;
	sum = 0;

	for (i = 0; i < 50; i++)
	{
		curfi = fi1 + fi2;

		if ((curfi % 2) == 0 && curfi <= 4000000)
			sum = sum + curfi;

		fi1 = fi2;
		fi2 = curfi;

	}
	printf("%lu\n", sum);
	return (0);

}
