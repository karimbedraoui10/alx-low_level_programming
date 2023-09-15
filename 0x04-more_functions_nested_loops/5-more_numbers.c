#include "main.h"

/**
 * more_numbers - print numbers from 0 to 9
 */

void more_numbers(void)
{
	int n, num, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			num = m;
			if (m > 9)
			{
				_putchar(1 + 48);
				num = m % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
