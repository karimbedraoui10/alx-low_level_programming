#include "main.h"

/**
 * print_diagonal - print lines
 *
 * @n: number of diagonals
 */

void print_diagonal(int n)
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
			for (d = 0; d <= m; d++)
			{
				if (d == m)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
