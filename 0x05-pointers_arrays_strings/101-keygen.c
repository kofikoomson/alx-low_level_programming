#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function will generate passwords
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pas[91];
	int i, sum, n;

	sum = 0;	

	srand(time(NULL));

	for (i = 0; i <91 ; i++)
	{
		pas[i] = rand() % 78;
		sum += (pas[i] + '0');
		putchar(pas[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
