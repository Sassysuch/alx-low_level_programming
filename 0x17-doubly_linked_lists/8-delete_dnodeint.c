#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list
 * @head: pointer to the pointer to the head of the list
 * @index: the index of the node to be deleted, starting from 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
	if (*head != NULL)
		(*head)->prev = NULL;
		free(temp);
	return (1);
	}

	while (current != NULL)
	{
	if (i == index)
	{
		temp = current;
		current->prev->next = current->next;
	if (current->next != NULL){
		current->next->prev = current->prev;
		free(temp);
	return (1);
	}
		i++;
	current = current->next;
	}
	
	return (-1);
}
