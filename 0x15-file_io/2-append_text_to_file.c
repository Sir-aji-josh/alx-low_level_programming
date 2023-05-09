#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 *
 * @filename: A pointer to name of the new file created
 *
 * @text_content: The string add to the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, nletters, rw_r;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rw_r = write(file_d, text_content, nletters);

		if (rw_r == -1)
			return (-1);
	}

	close(file_d);

	return (1);
}
