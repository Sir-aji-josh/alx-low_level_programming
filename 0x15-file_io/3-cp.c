#include "main.h"
#include <stdio.h>

/**
* main – Written code that copies the content
* of a file to another file
* @argc: num argument
* @argv: string argument
* Return: Always 0
*/

int main(int argc, char *argv[])
{
int file_from, file_to;
int num2 = 1024, num4 = 0;
char buf[1024];

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
file_from = open(argv[2], O_RDONLY);
if (file_from == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
	exit(98);
}
file_to = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (file_to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[4]);
	close(file_from), exit(99);
}
while (num2 == 1024)
{
	num2 = read(file_from, buf, 1024);
	if (num2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	num4= write(file_to, buf, num2);
	if (num4 < num2)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[4]), exit(99);
}

if (close(file_from) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

if (close(file_to) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

return (0);
}


