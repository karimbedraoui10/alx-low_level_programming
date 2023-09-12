#include "main.h"

/**
 * _islower - checking chars.
 *
 * Return: 0 if is upper and 1 if is lower
 *
 * @c: char to check
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
