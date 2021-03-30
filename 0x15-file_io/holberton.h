#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/*reads a text file and prints it to the POSIX standard output*/
ssize_t read_textfile(const char *filename, size_t letters);
/*creates a file*/
int create_file(const char *filename, char *text_content);
/*appends text at the end of a file*/
int append_text_to_file(const char *filename, char *text_content);
/*writes the character c to stdout*/
int _putchar(char c);
#endif
