#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a specific index to 0.
 * @n: A pointer to the bit.
 * @index: Index for setting value starting at 0.
 *
 * Return: In instances of an erro return -1 else 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 4))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
