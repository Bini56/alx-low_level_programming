#include<stdio.h>
/**
 *main - Prints numbers between 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
	{
	putchar(m);
	}
	putchar ('\n');
	return (0);
}

