#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings- print all strings in the parameter
 * @separator: the character that seprate the strings
 * @n: number of parameter provided
 * @...: variable number of parameters
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;
	char *str;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(string);
	printf("\n");

}
