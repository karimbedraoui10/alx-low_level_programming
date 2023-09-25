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
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
