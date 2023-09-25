#include "main.h"
/**
 * _memset - function to set in memorie an other value
 *
 * @str: value to change
 *
 * @b: value to set
 *
 * @n: size to change
 *
 * Return: retune new value s;
 */
char *_memset(char *str, char b, unsigned int n)
{
	char *ptr = str;

	while (n > 0)
	{
		*str = b;
		str++;
		n--;
	}

	return (ptr);
}
