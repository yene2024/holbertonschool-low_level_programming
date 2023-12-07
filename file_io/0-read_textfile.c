#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Read a text file and print its content to standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed. 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char buffer[1024];
	ssize_t bytesRead, totalBytesRead = 0;

	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}

	while ((bytesRead = fread(buffer, 1, sizeof(buffer), file)) > 0)
	{
		ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

		if (bytesWritten != bytesRead)
		{
			fclose(file);
			return (0);
		}

		totalBytesRead += bytesRead;

		if (totalBytesRead >= (ssize_t)letters)
		{
			break;
		}
	}

	fclose(file);

	return (totalBytesRead);
}

