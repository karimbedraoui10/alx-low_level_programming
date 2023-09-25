#include "main.h"
/**
 * _memset - function to set in memorie an other value
 *
 * @s: value to change
 *
 * @b: value to set
 *
 * @n: size to change
 *
 * Return: retune new value s;
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		*s++;
	}

	return (ptr);
}
