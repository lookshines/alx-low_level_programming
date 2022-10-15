#include <stdarg.h>

/**
 * sum_them_all - sum all its parameter
 * @n: number of parameters provided
 * @...: variable number of parameters
 *
 * Return: if n == 0, return 0
 *	    other sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;
	int sum;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);

	return (sum);
}
