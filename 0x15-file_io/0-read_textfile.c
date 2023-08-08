#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file and prints to POSIX Standard output
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *p;
	ssize_t a;
	ssize_t c;
	ssize_t b;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	p = malloc(sizeof(char) * letters);
	b = read(a, p, letters);
	c = write(STDOUT_FILENO, p, b);

	free(p);
	close(a);
	close(c);
	return (b);
}
