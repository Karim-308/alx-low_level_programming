#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: the file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print. 0 otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_length, write_length;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	read_length = read(fd, buffer, letters);
	if (read_length == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	write_length = write(STDOUT_FILENO, buffer, read_length);
	if (write_length == -1 || write_length != read_length)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (write_length);
}

