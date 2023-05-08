#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: content to write to text
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t n_read, n_write;
	int m_file;
	char *buffer;

	if (filename == NULL)
		return (-1);


	m_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (m_file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	if (text_content != NULL)
	{
		n_write = write(m_file, text_content, strlen(text_content));

		if (n_write == -1)
			return (-1);
	}

	close(m_file);

	return (1);

}

