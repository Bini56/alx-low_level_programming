#include "main.h"
/**
 *_islower - check lower case.
 *
 *@c: character to compare
 *Return: Always 0 (Success)
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);
}