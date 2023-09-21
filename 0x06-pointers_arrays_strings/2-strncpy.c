#include "main.h"
/**
 * _strncpy - function to add src to dest
 *
 * @dest: the 1st char
 *
 * @src: the 2nd char
 *
 * @n: number of characters
 *
 * Return: return char
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n > 0 && (*dest++ = *src++) != '\0')
	{
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (ptr);
}
