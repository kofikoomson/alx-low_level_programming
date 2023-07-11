#include "lists.h"

/**
 * get_nodeint_at_index - Finds a given node a given node of a function
 * @head: Points to the head of the function.
 * @index: The index of the node to locate - indices start at 0.
 *
 * Return: Null if node doesnt exist else located node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int GivenNode;

	for (GivenNode = 0; GivenNode < index; GivenNode++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
