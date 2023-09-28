#include "main.h"
/**
 * _sqrt_recursion - function to find sqr
 * square - function to find sqr
 * @n: input
 * @i: inputs
 * Return: result
 */
int square(int n, int i);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - function to find sqr
 * @n: input
 * @i: inputs
 * Return: result
 */
int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (square(n, i + 1));
	else
		return (-1);
}
