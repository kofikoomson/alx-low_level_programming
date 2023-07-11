#include "lists.h"

/**
 * free_listint2 - Frees the listint_t list.
 * @head: Points to the address of the head of the function.
 */

void free_listint2(listint_t **head)
{
	listint_t *FreeList;

	if (head == NULL)
		return;

	while (*head)
	{
		FreeList = (*head)->next;
		free(*head);
		*head = FreeList;
	}

	head = NULL;
}
