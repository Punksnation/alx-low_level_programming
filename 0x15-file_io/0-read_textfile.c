#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a file and writes it to stdout
 * @filename: name of the file to read
 * @letters: number of characters that need to read/written
 * Return: number of characters that  read/written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int of;
	size_t lRead, check;

	if (!filename || !letters)
		return (0);

	buff = malloc(letters);
	if (!buff)
		return (0);
	/* open file */
	of = open(filename, O_RDONLY);
	if (of == -1)
	{
		free(buff);
		return (0);
	}
	lRead = read(of, buff, letters);
	if (lRead < 1)
	{
		free(buff);
		close(of);
		return (0);
	}
	check = write(STDOUT_FILENO, buff, lRead);

	free(buff);
	close(of);

	if (!check || check != lRead)
		return (0);

	return (lRead);
}
