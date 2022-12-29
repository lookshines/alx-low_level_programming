#include "lists.h"

/**
 * add_node_end - functionn that adds a new node
 *	      at the end of a list_t list
 * @head: pointer to a pointerd
 * @str: string to be copied into new nod
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = new;

	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
