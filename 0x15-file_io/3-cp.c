#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * error - display error
 * @msg: message
 * @arg: argument
 * @exit_code: exit code
 */
void error(char *msg, char *arg, int exit_code)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(exit_code);
}

/**
 * main - copy content of one to another
 * @argc: argument count
 * @argv: argument value
 * Return: postive or negative
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t n_read;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error("Usage: cp file_from file_to\n", NULL, 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error("Error: Can't read from file %s\n", argv[1], 98);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	error("Error: Can't write to %s\n", argv[2], 99);

	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
	if (write(fd_to, buffer, n_read) != n_read)
	error("Error: Can't write to %s\n", argv[2], 99);
	}

	if (n_read == -1)
	error("Error: Can't read from file %s\n", argv[1], 98);

	if (close(fd_from) == -1)
	error("Error: Can't close fd %d\n", argv[1], 100);

	if (close(fd_to) == -1)
	error("Error: Can't close fd %d\n", argv[2], 100);

	return (0);
}
