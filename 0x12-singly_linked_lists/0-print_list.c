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
		h = h->next;
		i++;
	}
	return (i);
}
