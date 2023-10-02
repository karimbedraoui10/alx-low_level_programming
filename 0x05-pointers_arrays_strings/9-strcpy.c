#include "main.h"
/**
 * _strcpy - function to compy a string
 * @dest: destination
 * @src: the source
 * Return: return char copy
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
