#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of the element in the array
 * @size: the bytes of each element
 *
 * Return: if nmemb or size is 0 return NULL
 *	   if malloc fails, returns NULL
 *	   otherwise return void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *holder;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	holder = memory;

	for (i = 0; i <  (size * nmemb); i++)
		holder[i] = '\0';

	return (memory);
}
