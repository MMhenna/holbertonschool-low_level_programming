#include "lists.h"
#include <string.h>

listint_t *create_node(const int n);

/**
 * add_nodeint_end - Adds a node at the end of a linked list.
 * @head: pointer to the first node of a linked list.
 * @n: String to include in the node.
 *
 * Return: A pointer to the head of the linked list.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *new_node;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	return (*head);
}

/**
 * create_node - Creates a new node.
 * @n: String to add to the node.
 *
 * Return: A pointer to the allocated memory
 */

listint_t *create_node(const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}
