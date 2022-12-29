#include "lists.h"

/**
 * add_node - functionn that adds a new node
 *	      at the beginning of a list_t list
 * @head: pointer to a pointerd
 * @str: string to be copied into new nod
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
