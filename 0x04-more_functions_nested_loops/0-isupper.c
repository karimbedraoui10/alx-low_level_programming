#include "main.h"

/**
 * _isupper - check if is c upper
 *
 * @c: input for alphabet
 *
 * Return: 1 if is uppercase 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}