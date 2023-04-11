#include "main.h"

/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int	fd;
	int	w;
	int	len;

	len = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len])
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
