#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 *
 * @filename: A pointer to the name of the new file created
 *
 * @text_content: The string insert to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1
 *         If the file does not exist the user lacks write permissions - -1
 *         Otherwise - 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
        int o_open, w_write, len = 0;

        if (filename == NULL)
                return (-1);

        if (text_content != NULL)
        {
                for (len = 0; text_content[len];)
                        len++;
        }

        o_open = open(filename, O_WRONLY | O_APPEND);
        w_write = write(o_open, text_content, len);

        if (o_open == -1 || w_write -1)
                return (-1);

        close(o_open);

        return (1);
}
