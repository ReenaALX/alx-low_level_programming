#include "lists.h"

/**
 * free_dlistint - frees a linked dlistint_t list.
 *
 * @head: head of the dlistint_t list.
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
