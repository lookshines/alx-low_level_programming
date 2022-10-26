#include "lists.h"

/**
 * print_listint - prints all element of a listint_t list
 * @h: listint_t linklist
 *
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *nodes = h;
	size_t i = 0;


	while (nodes)
	{
		printf("%i\n", nodes->n);
		i++;
		nodes = nodes->next;
	}


	return (i);
}
