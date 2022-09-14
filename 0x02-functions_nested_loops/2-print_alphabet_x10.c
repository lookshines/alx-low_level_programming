#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet,
* in lowercase, followed by a new line
*
* Return void
*/
void print_alphabet_x10(void)
{
	int i, l;

	for (l = 0; l < 10; l++)
	{
		i = 97;
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}

		_putchar(10);
	}
}
