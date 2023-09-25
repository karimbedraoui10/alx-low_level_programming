#include "main.h"
/**
 * _strchr - function for get last o f string
 *
 * @s: ths string wher i search
 *
 * @c: char searshed
 *
 * Return: success
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
