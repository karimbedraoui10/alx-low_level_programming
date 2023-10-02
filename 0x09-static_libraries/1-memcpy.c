#include "main.h"
/**
 * _memcpy - function to set in memorie an other value
 *
 * @str: value to change
 *
 * @src: value to set
 *
 * @n: size to change
 *
 * Return: retune new value s;
 */
char *_memcpy(char *str, char *src, unsigned int n)
{
	char *ptr = str;

	while (n > 0)
	{
		*str = *src;
		str++;
		src++;
		n--;
	}

	return (ptr);
}
