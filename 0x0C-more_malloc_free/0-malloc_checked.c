#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: The number of bytes to be allocated
 *
 * Return: A pointer o the allocated memory.
 *
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);


	return (m);

}
