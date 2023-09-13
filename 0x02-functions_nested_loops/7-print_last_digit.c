#include "main.h"
/**
 *print_last_digit - Computes the absolute value
 *
 *@n: input number as an integer.
 *Return: absolute v
 **/
int print_last_digit(int n)
{
	n = (n % 10);
	if (n < 0)
	{
	_putchar(-n + 48);
	return (-n);
	}
	else
	{
	_putchar(n + 48);
	return (n);
	}
}

