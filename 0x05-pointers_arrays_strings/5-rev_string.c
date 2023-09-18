#include "main.h"
/**
 * rev_string - print the str
 *
 * @n: parameter that print
 */
void rev_string(char *n)
{
	int i;
	int len = 0;

	for (i = 0; n[i] != '\0'; i++)
		len++;
	for (i = 0; i < len / 2; i++)
	{
		char j;

		j = n[i];
		n[i] = n[len - 1 - i];
		n[len - 1 - i] = j;
	}
}
