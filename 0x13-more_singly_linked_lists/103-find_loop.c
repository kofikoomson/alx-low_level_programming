#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in the function
 * @head: Points to the head of the list
 *
 * Return: No loop = Null else  address of Node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *ha_re;

	if (head == NULL || head->next == NULL)
		return (NULL);

	turtle = head->next;
	ha_re = (head->next)->next;

	while (ha_re)
	{
		if (turtle == ha_re)
		{
			turtle = head;

			while (turtle != ha_re)
			{
				turtle = turtle->next;
				ha_re = ha_re->next;
			}

			return (turtle);
		}

		turtle = turtle->next;
		ha_re = (ha_re->next)->next;
	}

	return (NULL);
}
