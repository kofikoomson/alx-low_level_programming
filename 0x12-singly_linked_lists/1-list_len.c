#include <stdlib.h>
#include <string.h>
#include <stdio.h> 
#include "lists.h"

/**
 * list_len - check the code for Holberton School students.
 * 
 * @h: name of the list
 * 
 * Return: the no of elements.
 */

size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++;
		h = h->next;
	}

	return (element);
}

