#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *a;
	ssize_t b;
	ssize_t y;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (b == -1)
		return (0);
	a = malloc(sizeof(char) * letters);
	t = read(b, a, letters);
	w = write(STDOUT_FILENO, a, t);

	free(a);
	close(b);
	return (y);
}
