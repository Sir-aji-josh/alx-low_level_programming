#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file 
 *                 and prints it to POSIX stdout
 *
 * @filename: A pointer to name of the read_text file
 *
 * @letters: The number of letters the
 *           bash should read and print.
 *
 * Return: To the function if fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the bash can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o_open, r_read, w_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o_open = open(filename, O_RDONLY);
	r_read = read(o_open, buffer, letters);
	w_write = write(STDOUT_FILENO, buffer, r_read);

	if (o_open == -1 || r_read == -1 || w_write == -1 || w_write != r_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o_open);

	return (w_write);
}
