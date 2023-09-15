#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
