#include <stdio.h>
/**
 * main - Entry point where i create The printf Size of Types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	float b;
	char c;
	long int d;
	long long int e;

	printf("Size of a char: %c byte(s)\n", sizeof(c));
	printf("Size of a int: %d byte(s)\n", sizeof(a));
	printf("Size of a long int: %d byte(s)\n", sizeof(d));
	printf("Size of a long long int: %d byte(s)\n", sizeof(e));
	printf("Size of a float: %f byte(s)\n", sizeof(b));
	return (0);

}
