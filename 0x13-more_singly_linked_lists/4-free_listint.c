#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - This defines function
  * @head: describes argument
  */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
