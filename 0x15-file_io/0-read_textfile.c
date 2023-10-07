#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *p;
	ssize_t r;
	ssize_t s;
	ssize_t t;

	fd = open(filename, O_RDONLY);
		if (r == -1)
			return (0);
	p = malloc(sizeof(char) * letters);
	t = read(r, p, letters);
	s = write(STDOUT_FILENO, p, t);

	free(p);
	close(r);
	return (s);
}
