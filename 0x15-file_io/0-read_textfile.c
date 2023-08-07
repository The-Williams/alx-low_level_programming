#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file then prints to STDOUT.
 * @filename: the text file to be read
 * @letters: num of letters being read
 * Return: w- numb of bytes read and printed
 *        0 if the filename is NULL or the function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
