#include "lists.h"
#include <string.h>

/**
 * add_nodeint - Creates a node and adds it to a linked list
 * @head: Pointer to head of the linked list
 * @n: number to assigned to the node
 *
 * Return: Pointer to the head of the linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (*head);
}


