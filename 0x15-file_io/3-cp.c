#include "main.h"
#include <stdio.h>

/**
 * error_file - Fuction that checks if files can be opened
 *
 * @file_from: Current file_from
 *
 * @file_to: New current file_to
 *
 * @argv: Arguments  vector
 *
 * Return: None 
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Function that check code for Holberton School
 *
 * @argc: Number of arguments
 *
 * @argv: Arguments  vector
 *
 * Return: Always void (0)
 */
int main(int argc, char *argv[])
{
	int file_from;
        int file_to;
        int err_close;
	ssize_t num_chars;
	ssize_t	num_wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(file_from, buffer, 1024);
		if (num_chars == -1)
			error_file(-1, 0, argv);
		num_wr = write(file_to, buffer, num_chars);
		if (num_wr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
