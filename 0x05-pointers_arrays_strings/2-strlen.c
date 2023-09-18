#include "main.h"
/**
 * _strlen - get size of size str
 *
 * @n: the str char
 *
 * Return: the size of n
 */
int _strlen(char *n)
{
	int i;
	int c = 0;

	for (i = 0; n[i] != '\0'; i++)
		c++;
	return (c);
}
