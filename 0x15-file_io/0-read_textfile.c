#include "main.h"
/**
 * read_textfile -  a function that reads a text file and
 * prints it to the POSIX standard output.
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 * @filename: file name.
 * @letters: number of letters it should read and print.
 * Return: actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file_content;
	ssize_t fn, read_file, write_file;

	file_content = malloc(sizeof(char) * letters);
	if (file_content == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	fn = open(filename, O_RDONLY);
	if (fn == -1)
	{
		return (0);
	}
	read_file = read(fn, file_content, letters);
	if (read_file == -1)
	{
		free(file_content);
		return (0);
	}
	write_file = write(STDOUT_FILENO, file_content, read_file);
	free(file_content);
	close(fn);
	return (write_file);
}
