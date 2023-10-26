#include "main.h"
/**
 * print_binary - function to print binary
 * @n: input decimal
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n >> 1 != 0)
	{
		print_binary(n >> 1);
	}

	_putchar((n & 1) ? '1' : '0');
}
