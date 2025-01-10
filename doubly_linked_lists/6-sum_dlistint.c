#include "lists.h"

/**
 * sum_dlistint - Sums all the data (n) of a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

