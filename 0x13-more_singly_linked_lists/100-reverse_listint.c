#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of the function
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *in_front, *back_;

	if (head == NULL || *head == NULL)
		return (NULL);

	back_ = NULL;

	while ((*head)->next != NULL)
	{
		in_front = (*head)->next;
		(*head)->next = back_;
		back_ = *head;
		*head = in_front;
	}

	(*head)->next = back_;

	return (*head);
}
