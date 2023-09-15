#include "main.h"

/**
 * print_square - print lines
 *
 * @n: number of diagonals
 */

void print_square(int n)
{
	int m, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			for (d = 0; d < n; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
