#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 *i: the variable to be checked
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar((i % 10) + '0');

	_putchar('\n');
}
