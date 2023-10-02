#include <stdio.h>
/**
 * main - function print
 * @argc: input
 * @argv: array
 * Return: alwys 0 Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
