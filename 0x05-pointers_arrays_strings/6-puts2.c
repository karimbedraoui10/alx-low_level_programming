#include "main.h"
/**
 * puts2 - print the str
 *
 * @n: parameter that print
 */
void puts2(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
		if (i % 2 == 0)
			_putchar(n[i]);
	_putchar('\n');
}
