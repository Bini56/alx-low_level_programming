#include "main.h"

/**
 *factorial - returns the factorial of given numbers.
 *@n: integer
 *Return: factorial of the given integer.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
