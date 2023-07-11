#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given, index of a listint_t list.
 * @head: A pointer that points to the address of the function.
 * @index: The index of the node to be deleted - indices start at 0.
 * Return: Positive 1 when successful, Negative 1 when fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_, *copiedNode = *head;
	unsigned int node_;

	if (copiedNode == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copiedNode);
		return (1);
	}

	for (node_ = 0; node_ < (index - 1); node_++)
	{
		if (copiedNode->next == NULL)
			return (-1);

		copiedNode = copiedNode->next;
	}

	temp_ = copiedNode->next;
	copiedNode->next = temp_->next;
	free(temp_);
	return (1);
}
