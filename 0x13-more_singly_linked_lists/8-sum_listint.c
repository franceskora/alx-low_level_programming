#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum all of the data (n) in a list.
 * @head: address of the first node of the list.
 * Return: integer.
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
