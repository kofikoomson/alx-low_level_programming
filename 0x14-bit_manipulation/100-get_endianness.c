#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: if Big-endian 0; Little-endian 1
 */
int get_endianness(void)
{
	int numeral = 1;
	char *endian = (char *)&numeral;

	if (*endian == 1)
		return (1);

	return (0);
}
