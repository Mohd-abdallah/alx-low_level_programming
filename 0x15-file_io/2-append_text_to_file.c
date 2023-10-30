#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * where filename is the name of the file and text_content is
 * the NULL terminated string to add at the end of the file.
 * Do not create the file if it does not exist.
 * If filename is NULL return -1.
 * If text_content is NULL, do not add anything to the file.
 * @filename: file name.
 * @text_content: is the NULL terminated string.
 * Return: 1 if the file exists and -1 if the file does not exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_open, file_write;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	if (text_content != NULL)
	{
		file_open = open(filename, O_CREAT | O_WRONLY | O_APPEND);
		file_write = write(file_open, text_content, strlen(text_content));
	}
	if (file_open == -1 || file_write == -1)
	{
		return (-1);
	}
	close(file_open);
	return (1);
}
