#include "main.h"
/**
 * main - function to copy
 * @argc: input integer
 * @argv: input valus
 * Return: 0 for Success
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read = 1024, wrote, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	more_cp(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	more_cp(dest, -1, argv[2], 'W');
	while (n_read == 1024)
	{
		n_read = read(src, buffer, sizeof(buffer));
		if (n_read == -1)
			more_cp(-1, -1, argv[1], '0');
		wrote = write(dest, buffer, n_read);
		if (wrote == -1)
			more_cp(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	more_cp(close_src, src, NULL, 'C');
	close_dest = close(dest);
	more_cp(close_dest, dest, NULL, 'C');
	return (0);
}
/**
 * more_cp - function complet
 * @stat: inputs
 * @fd: inputs
 * @filename: inputs
 * @mode: input
 * Return: it void 0
 */
void more_cp(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
