#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to
 * be flipped to get from one number to another.
 * @n: The number.
 * @m: The number to be flipped n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n,
		unsigned long int m)
{
	unsigned long int xclusiveOR = n ^ m;
	unsigned long int Bits = 0;

	while (xclusiveOR > 0)
	{
		Bits += (xclusiveOR & 1);
		xclusiveOR >>= 1;
	}

	return (Bits);
}
