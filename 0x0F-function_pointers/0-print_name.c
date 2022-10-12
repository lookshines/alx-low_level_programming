#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 *
 * @name: char string
 * @f: function pointer that take char argument
 *
 * Return: Return Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
