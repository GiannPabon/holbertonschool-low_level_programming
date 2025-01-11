#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message to standard error and exits with a code
 * @exit_code: The exit code
 * @message: The error message to print
 * @extra: Additional string to include in the error message (can be NULL)
 */
void error_exit(int exit_code, const char *message, const char *extra)
{
	if (extra)
		dprintf(STDERR_FILENO, "%s %s\n", message, extra);
	else
		dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments passed
 * @argv: Array of argument strings
 *
 * Return: 0 on success, exits with various error codes on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to", NULL);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file", argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to", argv[2]);
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to", argv[2]);
	}
	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file", argv[1]);
	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd", "fd_from");
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd", "fd_to");
	return (0);
}
