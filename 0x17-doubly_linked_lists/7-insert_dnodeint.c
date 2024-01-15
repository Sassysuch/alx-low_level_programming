#include "lists.h"

/**
 * insert_dnodeint_at_index - inserting a new node at a given position
 * @h: pointer to the pointer to the head of the list
 * @idx: index of the list where the new node should be added, starting from 0
 * @n: The data of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *current;
	unsigned int i;
		node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	return (NULL);
		node->n = n;

	if (*h == NULL || idx == 0)
	return (add_dnodeint(h, n));

		current = *h;
	for (i = 0; i < idx && current->next != NULL; i++)
		current = current->next;

	if (i < idx)
	{
		free(node);
	return (NULL);
	}

		node->prev = current;
		node->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = node;
		current->next = node;
	}
	return (node);
}
