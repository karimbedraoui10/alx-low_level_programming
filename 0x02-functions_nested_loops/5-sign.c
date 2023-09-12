#include "main.h"

/**
 * print_sign - checking chars.
 *
 * Return: 0 if is upper and 1 if is lower
 *
 * @c: char to check
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
