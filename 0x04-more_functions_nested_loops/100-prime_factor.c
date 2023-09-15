#include <stdio.h>

/**
 *main - prints largest prime factor.
 *Return: Always 0
 */

int main(void)
{
	long int m, n;

	m = 612852475143;
	for (n = 2; n <= m; n++)
	{
	if (m % n == 0)
	{
	m /= n;
	n--;
	}
	}
	printf("%ld\n", n);
	return (0);
}
