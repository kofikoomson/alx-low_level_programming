#include "lists.h"

/**
 * free_listint - Frees the listint_t list.
 * @head: Points to the head of the function of the list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *FreeList;

	while (head)
	{
		FreeList = head->next;
		free(head);
		head = FreeList;
	}
}
