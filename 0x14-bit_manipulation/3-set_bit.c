#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: Points to the bit.
 * @index: The index to set the value starting at 0.
 *
 * Return: In instances of error return -1 else 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 4))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
