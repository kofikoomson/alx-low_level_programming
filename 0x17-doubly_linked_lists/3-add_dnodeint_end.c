#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL else address of new node
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add_node, *end;

	add_node = malloc(sizeof(dlistint_t));
	if (add_node == NULL)
		return (NULL);

	add_node->n = n;
	add_node->next = NULL;

	if (*head == NULL)
	{
		add_node->prev = NULL;
		*head = add_node;
		return (add_node);
	}

	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = add_node;
	add_node->prev = end;

	return (add_node);
}
