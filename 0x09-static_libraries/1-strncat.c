#include "main.h"
/**
 * _strncat - function to add src to dest
 *
 * @dest: the 1st char
 *
 * @src: the 2nd char
 *
 * @n: number of characters
 *
 * Return: return char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*dest)
		dest++;
	while (*src)
	{
		if (i == n)
			break;
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (ptr);
}
