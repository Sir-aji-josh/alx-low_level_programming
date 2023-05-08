#ifndef _MY_MAIN_H_
#define _MY_MAIN_H_
#define BUFFER_SIZE 1024 /*define size task 3 cp*/

/* Libraries To Be Used To Get 0x15-file_io Done */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* Prototypes For Task 1; 2; 3; */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* _MY_MAIN_H */
