#include "main.h"
#include <stdio.h>

/**
 * error_file - Function That Checks If Files Can Be Opened
 *
 * @file_from: Current file_from
 *
 * @file_to: New current file_To
 *
 * @argv: Arguments Import Statues 
 *
 * Return: No Return or Always Void (0)
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
 * main - Function That Check Code For Holberton School
 *
 * @argc: Number Of Arguments
 *
 * @argv: Arguments Import Statues 
 *
 * Return: Void (0) Always
 */
int main(int argc, char *argv[])
{
	int file_from;
        int file_to;
        int err_close;
	ssize_t num_chars, no_wr;
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
		no_wr = write(file_to, buffer, num_chars);
		if (no_wr == -1)
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
