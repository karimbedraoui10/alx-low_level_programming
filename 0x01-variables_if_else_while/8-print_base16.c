#include <stdio.h>
/**
 * main - Entry point where i create The printf Function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
