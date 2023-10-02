#include "main.h"
/**
 * _strcat - function to add src to dest
 *
 * @dest: the 1st char
 *
 * @src: the 2nd char
 *
 * Return: return char
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
