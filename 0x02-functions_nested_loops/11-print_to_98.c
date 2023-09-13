#include "main.h"
/**
 * print_to_98 - print to 98 .
 *
 * @n: print from
 */

void print_to_98(int n)
{
	int m;

	if (n > 98)
	{
		for (m = n; m >= 98; m--)
		{
			if (m == 98)
			{
				printf("%d", m);
			}
			else
				printf("%d, ", m);

		}
	}
	else if (n < 98)
	{
		for (m = n; m <= 98; m++)
			if (m == 98)
			{
				printf("%d", m);
			}
			else
				printf("%d, ", m);
	}
	else
		printf("%d", n);
	printf("\n");
}
