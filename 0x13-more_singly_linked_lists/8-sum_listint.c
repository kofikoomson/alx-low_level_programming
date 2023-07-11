#include "lists.h"
/**
 * sum_listint - Calculates the sum of all the data (n) of the function.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the list is empty - 0. Else sum of data.
 */
int sum_listint(listint_t *head)
{
	int SumOfData = 0;

	while (head)
	{
		SumOfData += head->n;
		head = head->next;
	}

	return (SumOfData);
}
