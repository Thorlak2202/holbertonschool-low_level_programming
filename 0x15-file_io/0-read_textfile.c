#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
*
* @filename: pointer to the name of the file.
* @letters: is the number of letters it should read and print.
*
* Return: 1 if it worked, or 0 if an error occurred.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count = 0;
	char *buf;

	buf = malloc(letters);
	if (buf == NULL)
	{
		return (0);
	}


	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	count += read(fd, buf, letters);
	buf[count] = '\0';

	dprintf(STDIN_FILENO, "%s", buf);

	close(fd);
	free(buf);
	return (count);
}
