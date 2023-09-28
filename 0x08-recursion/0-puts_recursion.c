#include "main.h"
/**
 * _puts_recursion - function to print inputs
 * @c: parametre input
 */
void _puts_recursion(char *c)
{
	if (*c)
	{
		_putchar(*c);
		_puts_recursion(c + 1);
	}
	else
		_putchar('\n');
}
