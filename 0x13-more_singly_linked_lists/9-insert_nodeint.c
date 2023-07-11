#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a function at a given position
 * @head: A pointer that points to the address of the new node
 * @idx: The index of the listint_t list where the new node is
 * @n: The integer for the NewNode node to contain.
 * Return: If the function fails - NULL else the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *NewNode, *CopiedNode = *head;
	unsigned int node_;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);

	NewNode->n = n;

	if (idx == 0)
	{
		NewNode->next = CopiedNode;
		*head = NewNode;
		return (NewNode);
	}

	for (node_ = 0; node_ < (idx - 1); node_++)
	{
		if (CopiedNode == NULL || CopiedNode->next == NULL)
			return (NULL);

		CopiedNode = CopiedNode->next;
	}

	NewNode->next = CopiedNode->next;
	CopiedNode->next = NewNode;

	return (NewNode);
}
