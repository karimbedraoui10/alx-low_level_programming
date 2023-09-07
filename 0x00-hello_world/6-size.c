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

	printf("Size of a char:%c\n", sizeof(c));
	printf("Size of a int:%d\n", sizeof(a));
	printf("Size of a long int:%d\n", sizeof(d));
	printf("Size of a long long int:%d\n", sizeof(e));
	printf("Size of a float:%f\n", sizeof(b));
	return (0);

}
