#include "lists.h"
/**
 * print_listint - function to print a content of list
 * @h: input lists_t
 * Return: return size of list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *current = h;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}

	return (i);
}
