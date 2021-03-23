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
	int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		if (h->n == '\0')
			printf("0\n");
		else
			printf("%d\n", h->n);
	h = h->next;
	}
	printf("%d\n", h->n);
	return (i);
}