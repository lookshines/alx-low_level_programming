#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	current = *head;
	temp = current;

	if (*head != NULL)
	{
		while (temp != NULL)
		{
			current = current->next;
			free(temp);
			temp = current;
		}
		*head = NULL;
	}
}
