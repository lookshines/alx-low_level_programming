#include "main.h"
/**
* print_alphabet - print alphabet in lower case uisng _putchar
* on a new line
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
