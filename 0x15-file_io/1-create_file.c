#include "main.h"

/**
 * create_file - Creates A New File
 * @filename: filename.
 * @text_content: Pointer To The Content Writed In The File.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)

{
int fd;
int new_letterfiles;
int rwr;

if (!filename)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (fd == -1)
return (-1);

if (!text_content)
text_content = "";

for (new_letterfiles = 0; text_content[new_letterfiles]; new_letterfiles ++)
;

rwr = write(fd, text_content, new_letterfiles);

if (rwr == -1)
return (-1);

close(fd);

return (1);
}

