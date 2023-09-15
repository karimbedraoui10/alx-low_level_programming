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
		for (m = 0; m < n; m++)
		{
			for (d = 0; d < n; d++)
			{
				if ((m + d) < n)
					_putchar(' ');
				else
					_putshar('#');
			}
			_putchar('\n');
		}
	}
}
