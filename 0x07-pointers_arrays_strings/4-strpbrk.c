#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string that where you search
 * @accept: char or byte
 * Return: the char that search
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}