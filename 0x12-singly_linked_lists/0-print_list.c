#include "lists.h"
/**
 * print_list - function to print list
 * @h: is list_t
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		i++;
	}
	return (i);
}
