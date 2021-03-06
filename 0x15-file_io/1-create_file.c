#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include "holberton.h"

/**
* create_file - reads a text file and prints it to the POSIX standard output.
*
* @filename: pointer to the name of the file.
* @text_content: is the number of letters it should read and print.
*
* Return: 1 if it worked, or 0 if an error occurred.
*/
int create_file(const char *filename, char *text_content)
{
	int fd = 0;

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
	write(fd, text_content, strlen(text_content));
	}
	close(fd);

	return (1);
}
