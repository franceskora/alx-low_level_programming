#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning
 *		of a list_t list.
 * @head: The head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: NULL on failure and the address
 *	of the new element on success.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
