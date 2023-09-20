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
	int i = 0;

	while (*dest)
	{
		if (i < n)
		{
			*dest = *src;
			src++;
			dest++;
			i++;
		}
		else
		{
			*dest = *dest;
			dest++;
		}
	}
	*dest = '\0';
	return (ptr);
}
