#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include "holberton.h"

/**
* append_text_to_file - appends text at the end of a file.
*
* @filename: pointer to the name of the file.
* @text_content: is the number of letters it should read and print.
*
* Return: 1 if it worked, or 0 if an error occurred.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_APPEND, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);

	if (fd == -1)
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
