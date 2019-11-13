#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include "holberton.h"

/**
* close_args - closes open files.
*
* @fd: file descriptor for open.
* @fdwr:  file descriptor for write.
*
*/

void close_args(int fd, int fdwr)
{
	int close1, close2;

	close1 = close(fd);
	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close1);
		exit(100);
	}
	close2 = close(fdwr);
	if (close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", close2);
		exit(100);
	}
}

/**
* main - copies the content of a file to another file.
*
* @argc: args qtty.
* @argv: args value.
*
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	int fd = 0, count, fdwr = 0;
	char *buf;

	if (argc == 3)
	{
	buf = malloc(1024);
	if (buf == NULL)
		return (0);
	fd = open(argv[1], O_RDWR);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdwr = open(argv[2], O_CREAT | O_RDWR | O_APPEND | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
	if (fdwr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	while ((count = read(fd, buf, 1024)) != 0)
	{
	count = write(fdwr, buf, count);
	if (count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	}
	free(buf);
	close_args(fd, fdwr);
	}
	else
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	return (0);
}
