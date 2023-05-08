#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - read text file by bytes
 * @filename: name of the file
 * @letters: number of letters to read
 * Return: bytes read OR 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_read, n_write;
	int m_file;
	char *buffer;

	if (filename == NULL)
		return (0);

	m_file = open(filename, O_RDONLY);

	if (m_file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	n_read = read(m_file, buffer, letters);

	if (n_read == -1)
		return (0);

	n_write = write(STDOUT_FILENO, buffer, n_read);

	if (n_write == -1 || n_write != n_read)
		return (0);

	free(buffer);
	close(m_file);

	return (n_write);

}

