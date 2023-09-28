#include "main.h"
/**
 * _print_rev_recursion - function to print reverse
 * @c: parameter to print
 */
void _print_rev_recursion(char *c)
{
	if(*c == '\0')
	{
		_print_rev_recursion(c + 1);
		_putchar(*c);
	}
}
