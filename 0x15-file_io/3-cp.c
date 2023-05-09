#include "main.h"

/**
 * main - Function that copies the content of a file to another file
 *
 * @argc: Number of arguments passed to the running program
 *
 * @argv: Array of arguments in file
 *
 * Return: Always void (0)
 */
int main(int argc, char *argv[])
{
	int file_r, file_w, t, i, j;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_r = open(argv[1], O_RDONLY);

	if (file_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((t = read(file_r, buffer, BUFSIZ)) > 0)
	{
		if (file_w < 0 || write(file_w, buffer, t) != t)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_r);
			exit(99);
		}
	}
	if (t < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	i = close(file_r);
	j = close(file_w);
	if (i < 0 || j < 0)
	{
		if (i < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_r);
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_w);
		exit(100);
	}
	return (0);
}
