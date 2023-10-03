#include "main.h"
/**
 * create_array - function to print array
 * @size: the size
 * @c: input
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0 || size == 0)
		return (0);
	while (size--)
		ptr[size] = c;
	return (ptr);
}
