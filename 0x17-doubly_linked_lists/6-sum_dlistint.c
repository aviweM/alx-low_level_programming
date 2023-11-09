#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the integers in a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 *
 * Return: The sum of all the integers, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
