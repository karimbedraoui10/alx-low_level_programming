#include "main.h"
/**
 * swap_int - swap tow numbers
 *
 * @n: the number that swap
 *
 * @m: the number that swap
 */

void swap_int(int *n, int *m)
{
	int a = *n;
	int b = *m;

	*n = b;
	*m = a;
}
