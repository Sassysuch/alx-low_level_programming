#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - This adds new nodes to the list
  * @head: The current place in the list
  * @n: The int to add to the list
  * Return: The pointer to current position in list
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
