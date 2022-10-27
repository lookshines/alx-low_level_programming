#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all element of a listint_t list
 * @h: listint_t linklist
 *
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;


	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}


	return (nodes);
}
