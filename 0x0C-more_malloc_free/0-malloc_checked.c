#include "main.h"
/**
 * malloc_checked - function check the int
 * @b: input
 * Return: adresse return
 */
void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);

	return (m);
}
