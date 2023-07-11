#include "lists.h"

/**
 * pop_listint - Deletes the head node of a the function.
 * @head: A pointer to the address of the function.
 *
 * Return: Returns 0 if empty, Head nodes data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *DeleteHeadNode;
	int NodeData;

	if (*head == NULL)
		return (0);

	DeleteHeadNode = *head;
	NodeData = (*head)->n;
	*head = (*head)->next;

	free(DeleteHeadNode);

	return (NodeData);
}
