#include "main.h"
/**
 * is_prime_number - function to check is prime
 * check_prime - function that check
 * @n: input that checked
 * @i: number tested
 * Return: result
 */
int check_prime(int n, int i);
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - function that check
 * @n: input that checked
 * @i: number tested
 * Return: result
 */
int check_prime(int n, int i)
{
	if (i <= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, (i + 1)));
}
