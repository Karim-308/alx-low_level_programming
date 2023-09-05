#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_res, len = 0;

	if (!filename)
		return (-1);

	/* Create or truncate file with permissions rw------- */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, it means we are to create an empty file */
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	/* Calculate length of text_content */
	while (text_content[len])
		len++;

	/* Write content to the file */
	write_res = write(fd, text_content, len);
	if (write_res == -1 || write_res != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

