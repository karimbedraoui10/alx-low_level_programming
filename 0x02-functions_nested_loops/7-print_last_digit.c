#include "main.h"

/**
 * print_last_digit - checking chars.
 *
 * Return: 0 if is upper and 1 if is lower
 *
 * @c: char to check
 */

int print_last_digit(int c)
{
	int r;

	if (c >= 0)
		r = c % 10;
	else
		r = -c % 10;

	_putchar('0'+ r);
	return (r);
}
