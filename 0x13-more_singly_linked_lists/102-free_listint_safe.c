#include "lists.h"

/**
 * looped_listint_count - Counts the number of unique nodes.
 * @head: Points to the head of the listint_t to check.
 * Return: If the list is not looped - 0 else the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *turtle, *ha_re;
	size_t Nodes_ = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	turtle = head->next;
	ha_re = (head->next)->next;

	while (ha_re)
	{
		if (turtle == ha_re)
		{
			turtle = head;
			while (turtle != ha_re)
			{
				Nodes_++;
				turtle = turtle->next;
				ha_re = ha_re->next;
			}

			turtle = turtle->next;
			while (turtle != ha_re)
			{
				Nodes_++;
				turtle = turtle->next;
			}

			return (Nodes_);
		}

		turtle = turtle->next;
		ha_re = (ha_re->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: Points to the address of the function.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp_;
	size_t Nodes_, position;

	Nodes_ = looped_listint_count(*h);

	if (Nodes_ == 0)
	{
		for (; h != NULL && *h != NULL; Nodes_++)
		{
			temp_ = (*h)->next;
			free(*h);
			*h = temp_;
		}
	}

	else
	{
		for (position = 0; position < Nodes_; position++)
		{
			temp_ = (*h)->next;
			free(*h);
			*h = temp_;
		}

		*h = NULL;
	}

	h = NULL;

	return (Nodes_);
}
