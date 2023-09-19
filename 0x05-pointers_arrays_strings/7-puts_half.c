#include "main.h"
/**
 * puts_half - print the str
 *
 * @n: parameter that print
 */
void puts_half(char *n)
{
	int i;
	int len = 0;

	for (i = 0; n[i] != '\0'; i++)
		len++;
	for (i = 0; n[i] != '\0'; i++)
		if (i > ((len - 1) / 2))
			_putchar(n[i]);
	_putchar('\n');
}
