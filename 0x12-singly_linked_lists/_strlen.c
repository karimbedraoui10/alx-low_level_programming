#include "lists.h"
/**
 * _strlen - function to count size of character on string
 * @c: input
 * Return: size
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}
	while (*s++)
	{
		i++;
	}
	return (i);
}
