#include <stdio.h>
/**
 * main - Entry point where i create The printf Function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z'){
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);

}
