#include "lists.h"
/**
  * get_nodeint_at_index - This gets the nth node of the list
  * @head: The head of the list
  * @index: what node to stop at
  * Return: The pointer to the nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
