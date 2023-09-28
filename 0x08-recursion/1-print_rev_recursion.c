#include "main.h"
/**
 * _print_rev_recursion - function to print reverse
 * @c: parameter to print
 */
void _print_rev_recursion(char *c)
{
	int i;
	int len = 0;

	for (i = 0; c[i]; i++)
	{
		len++;
	}
	while (len > 0)
	{
		putchar(c[len]);
		len--;
	}
}
