
#include <stdio.h>
/**
 * main - function print
 * @argc: input
 * @argv: array
 * Return: alwys 0 Success
 */
int main(int argc, char *argv[])
{
	(void)argv[argc];
	printf("%d\n", (argc - 1));
	return (0);
}
