#include "main.h"

/**
 *more_numbers - print 0 to 9 except 2 and 4.
 *Return: 1 if is an uppercase character, 0 in other case.
 */

void more_numbers(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch < 15; ch++)
		{

			if (ch >= 10)
				_putchar((ch / 10) + 48);
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
	}
}
