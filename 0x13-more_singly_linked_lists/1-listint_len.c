#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: value or number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t value = 0;

	while (h)
	{
		value++;
		h = h->next;
	}

	return (value);
}
