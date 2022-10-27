#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* function that prints all the elements of a list_t list */
size_t print_listint(const listint_t *h);

/* function that returns the number of elements in a linked listint_t list*/
size_t listint_len(const listint_t *h);
#endif
