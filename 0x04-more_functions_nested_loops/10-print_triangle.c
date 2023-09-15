#include "main.h"

/**
 * print_triangle - print lines
 *
 * @n: number of diagonals
 */

void print_triangle(int n)
{
	int m, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			for (d = 1; d <= n; d++)
			{
				if ((m + d) <= n)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
