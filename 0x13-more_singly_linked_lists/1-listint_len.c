#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list.
 * @h: pointer to head of listint_t list
 *
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h);
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);

}
