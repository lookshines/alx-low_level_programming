#include "main.h"
/**
* main - function that prints all alphabet in lower case
*
* description - function print_alphabet
*
* Return void
*/
void print_alphabet(void)
{
	int i;

	i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}

	_putchar(10);

}
