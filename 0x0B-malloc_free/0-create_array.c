#include "main.h"
/**
 * create_array - function to print array
 * @size: the size
 * @c: input
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size * sizeof(char));

	if (size == 0 || size == 0)
		return (NULL);
	while (size--)
		ptr[size] = c;
	return (ptr);
}
