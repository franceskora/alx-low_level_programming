#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node at the end of a list.
 * @head: address of the first node of a list.
 * @n: integer to insert in the new node.
 * Return: address of the new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *temp2;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp2 = *head;
	while (temp2->next)
		temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}
