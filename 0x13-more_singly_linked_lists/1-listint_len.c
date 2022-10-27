#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return number of element in listint_t list
 * @h: listint_t linklist
 *
 * Return: the number of elements i h
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;


	while (h)
	{
		h = h->next;
		elements++;
	}


	return (elements);
}
