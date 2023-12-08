#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * Usage: cp file_from file_to
 *
 * Return: 0 on success, or an error code on failure.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		display_usage(argv[0]);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		read_error(argv[1]);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		write_error(argv[2]);
	}

	copy_file(fd_from, fd_to);

	if (close(fd_from) == -1)
	{
		close_error(fd_from);
	}

	if (close(fd_to) == -1)
	{
		close_error(fd_to);
	}

	return (0);
}
