#include "main.h"
/**
 *print_sign - Shows 1 if the input is a
 *
 *@n: the chracter is dinoted
 *Return: 1 for lowercase character. 0 for the rest.
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

	_putchar('-');
	return (-1);
}

