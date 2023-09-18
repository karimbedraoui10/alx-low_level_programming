#include "main.h"
/**
 * print_rev - print the str
 *
 * @n: parameter that print
 */
void print_rev(char *n)
{
	int i;
	int len = 0;

	for (i = 0; n[i] != '\0'; i++)
		len++;
	while (len--)
		_putchar(n[len]);
	_putchar('\n');
}
