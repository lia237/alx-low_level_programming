#include "main.h"

/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t	f;
	ssize_t	r;
	ssize_t	w;
	char	*buffer;

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		free(buffer);
		return (0);
	}
	r = read(f, buffer, letters);
	w = write(1, buffer, r);
	close(f);
	return (w);
}
