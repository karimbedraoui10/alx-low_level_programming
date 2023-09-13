#include "main.h"
/**
 * positive_or_negative - print the nomber is positive or negative
 *
 * @n: the nomber to cheack
 */

void positive_or_negative(int n)
{
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
		printf("%d is zero\n", n);
}
