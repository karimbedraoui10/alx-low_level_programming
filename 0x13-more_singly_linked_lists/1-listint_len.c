#include "lists.h"
/**
 * listint_len - function to print a content of list
 * @h: input lists_t
 * Return: return size of list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *current = h;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		current = current->next;
		i++;
	}

	return (i);
}
