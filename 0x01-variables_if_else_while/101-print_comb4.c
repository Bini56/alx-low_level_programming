#include<stdio.h>
/**
 *main - Prints numbers between 00 to 99.
 *
 *Return: Always 0 (Succ
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
	for (j = (i + 1); j < 58; j++)
	{
	for (k = (j + 1); k < 58; k++)
	{
	putchar(i);
	putchar(j);
	putchar(k);
	if (i == 55 && (j == 56 && k == 57))
	{
	break;
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

