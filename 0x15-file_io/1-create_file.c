#include "main.h"

/**
 * create_file - creates a file that function
 *
 * @filename: variable pointer to new doc
 *
 * @text_content: content write in create file

 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, createfile;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	createfile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (createfile == -1)
		return (-1);

	write (createfile, text_content, i);

	return (1);
}
