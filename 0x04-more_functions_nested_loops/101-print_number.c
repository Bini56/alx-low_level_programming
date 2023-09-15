#include "main.h"

/**
 *print_number - prints an integer.
 *@n: input integer.
 *Return: no return.
 */
void print_number(int n)
{
	unsigned int m, l, o;

	if (n < 0)
	{
	_putchar(45);
	m = n * -1;
	}
	else
	{
	m = n;
	}
	l = m;
	o = 1;
	while (l > 9)
	{
	l /= 10;
	o *= 10;
	}
	for (; o >= 1; o /= 10)
	{
	_putchar(((m / o) % 10) + 48);
	}
}
