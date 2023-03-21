#include "main.h"

/**
 * times_table - function prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int number, multiply, product;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (multiply = 1; multiply <= 9; multiply++)
		{
			_putchar(',');
			_putchar(' ');

			product = number * multiply;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
