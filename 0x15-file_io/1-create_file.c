#include "main.h"

/**
 * create_file - Creates A New File
 *
 * @filename: New Filename
 *
 * @text_content: Pointer To The Content Writed In The File.
 *
 * Return: If the function fails - -1
 *                      Otherwise - 1
 */

int create_file(const char *filename, char *text_content)
{
        int o_open, w_write, len = 0;

        if (filename == NULL)
                return (-1);

        if (text_content != NULL)
        {
                for (len = 0; text_content[len];)
                        len++;
        }

        o_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
        w_write = write(o_open, text_content, len);

        if (o_open == -1 || w_write == -1)
                return (-1);

        close(o_open);

        return (1);
}

