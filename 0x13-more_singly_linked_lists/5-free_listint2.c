#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list, setting the head to null
 * @head: pointer to the addrss of head of a listint_t list
 */


void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
