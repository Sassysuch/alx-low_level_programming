#include "lists.h"
/**
  * sum_listint - This sums all elements of a list
  * @head: The pointer to the head of the list
  * Return: The sum of all elements
  */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
