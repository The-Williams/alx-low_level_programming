#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- prints STDOUT after Reading a text file.
 * @filename: text file which is read
 * @letters: total letters read
 * Return: w- total bytes read and printed
 *        0 filename is NULL or the function fails.
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
