#include "function_pointers.h"
/**
 * print_name - function to print name
 * @name: input
 * @f: functiont
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
