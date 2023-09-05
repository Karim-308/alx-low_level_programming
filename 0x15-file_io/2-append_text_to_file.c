#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_res, len = 0;

	if (!filename)
		return (-1);

	/* Open the file in append mode*/
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, don't write anything. Just close and return.*/
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	/* Calculate length of text_content */
	while (text_content[len])
		len++;

	/* Append content to the file*/
	write_res = write(fd, text_content, len);
	close(fd);

	if (write_res == -1)
		return (-1);

	return (1);
}

