#include "main.h"
/**
 * create_file - a function that creates a file.
 * where filename is the name of the file to create and text_content is
 * a NULL terminated string to write to the file.
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it.
 * if filename is NULL return -1.
 * if text_content is NULL create an empty file.
 * @filename: file name.
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_open, file_write;
	int size = strlen(text_contnet);

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		file_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	}
	if (text_content != NULL)
	{
		file_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		file_write = write(file_open, text_content, size);
	}
	if (file_open == -1 || file_write == -1)
	{
		return (-1);
	}
	close(file_open);
	return (1);
}
