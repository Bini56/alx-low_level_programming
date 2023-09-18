#include "main.h"

/**
 *swap_int - takes a pointer to a parameter and updates its value.
 *@a: input integer.
 *@b: input integer.
 *Return: swap of a and b.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
