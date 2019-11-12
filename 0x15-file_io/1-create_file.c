#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
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

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (filename == NULL)
	{
		return (-1);
	}
	close(fd);
	if (text_content != NULL)
	{
	write(fd, text_content, *text_content);
	}
	else
	{
		write(fd, text_content, '\0');
	}
	return (1);
}
