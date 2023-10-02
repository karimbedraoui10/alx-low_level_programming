#include "main.h"
/**
 * _puts - print the str
 *
 * @n: parameter that print
 */
void _puts(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
		_putchar(n[i]);
	_putchar('\n');
}
