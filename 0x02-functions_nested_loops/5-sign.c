#include "main.h"

/**
 * print_sign - function prints the sign of a number.
 * @n: The number of which the sign will be printed.
 *
 * Return 1 and print + if the number is greater than zero, else
 * Return 0 and print 0 if the number is zero, else
 * Return -1 and print - if the number is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
