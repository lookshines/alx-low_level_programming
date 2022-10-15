#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print all numbers in the parameter
 * @separator: the character that seprate the numbers
 * @n: number of parameter provided
 * @...: variable number of parameters
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(nums);
	printf("\n");

}
