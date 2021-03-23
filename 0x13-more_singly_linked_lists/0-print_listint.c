#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: The total amount of nodes in the linked list
*/

size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	for (i = 0; h; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}

