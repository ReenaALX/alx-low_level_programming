#include "lists.h"

/**
 * distint_len - returns the number of elements
 * in a linked distint_t list.
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h);
{
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
