#include <stdio.h>

/**
 * main - function computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	unsigned long int sumof3, sumof5, sum;
	int i;

	sumof3 = 0;
	sumof5 = 0;
	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sumof3 = sumof3 + i;
		} else if ((i % 5) == 0)
		{
			sumof5 = sumof5 + i;
		}
	}
	sum = sumof3 + sumof5;
	printf("%lu\n", sum);
	return (0);
}
