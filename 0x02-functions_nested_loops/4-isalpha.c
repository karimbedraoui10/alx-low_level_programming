#include "main.h"

/**
 * _isalpha - checking chars.
 *
 * Return: 0 if is upper and 1 if is lower
 *
 * @c: char to check
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
