#include "lists.h"

/**
 * list_len - function that returns the
 *	      number of elements in a linked list_t list
 * @h: the link to list_t list struct
 *
 * Return: the number of element in h
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
