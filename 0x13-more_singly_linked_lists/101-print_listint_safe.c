#include "lists.h"
/**
 * looped_listint_len - Counts the number of unique nodes in a function
 * @head: Points to the head of the function
 *
 * Return: If the list is not looped - 0 else the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *turtle, *ha_re;
	size_t nodes = 1;

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
				nodes++;
				turtle = turtle->next;
				ha_re = ha_re->next;
			}

			turtle = turtle->next;
			while (turtle != ha_re)
			{
				nodes++;
				turtle = turtle->next;
			}

			return (nodes);
		}

		turtle = turtle->next;
		ha_re = (ha_re->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: Points to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t Node_, position = 0;

	Node_ = looped_listint_len(head);

	if (Node_ == 0)
	{
		for (; head != NULL; Node_++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (position = 0; position < Node_; position++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (Node_);
}
