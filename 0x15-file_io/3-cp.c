#include "main.h"
/**
 * test_func - function that test
 * @ac: number of arguments.
 * @av: arguments.
 * Return: 0 on success, 1 on failure.
 */

int test_func(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: %s file_from file_to\n", av[0]);
		return (1);
	}
	if (av[1] == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", av[1]);
		return (1);
	}
	return (0);
}

/**
 * copyFile - function that copies a file.
 * @source: copy sourse
 * @destination: copy destination
 * Return: 0 on success.
 */

int copyFile(const char *source, const char *destination)
{
	int file_one, file_two, read_file, write_file;
	char buffer[BUFFER_SIZE];

	file_one = open(source, O_RDONLY);
	if (file_one == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", source);
		return (1);
	}
	read_file = read(f1, buffer, sizeof(buffer));
	if (read_file == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", source);
		close(file_one);
		return (1);
	}
	file_two = open(destination, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_two == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to file %s\n", destination);
		close(file_one);
		return (1);
	}
	write_file = write(file_two, buffer, read_file);
	if (write_file == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to file %s\n", destination);
		close(file_one);
		close(file_two);
		return (1);
	}
	if (close(file_one) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_one);
		perror("close");
		return (1);
	}
	return (0);
}


/**
 * main - function that copies a file.
 * @ac: number of arguments.
 * @av: arguments.
 * Return: 0 on success, 1 on failure.
 */
int main(int ac, char **av)
{
	if (test_func(ac, av) != 0)
	{
		exit(1);
	}
	if (copyFile(av[1], av[2]) != 0)
	{
		exit(1);
	}
	return (0);
}
