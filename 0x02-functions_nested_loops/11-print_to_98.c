#include <stdio.h>

/**
 * print_to_98 - function prints all natural numbers from n to 98,
 * @n: The number passed to print_to_98
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
