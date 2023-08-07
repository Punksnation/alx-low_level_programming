#include "main.h"

/**
 * read_textfile - reads a file and writes it to stdout
 * @filename: name of the file to read
 * @letters: number of characters that need to read/written
 * Return: number of characters that  read/written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd_cnt, w_count, fd;
	char *buffer;

	if (!filename || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	rd_cnt = read(fd, buffer, letters);
	close(fd);
	if (rd_cnt <= 0)
	{
		free(buffer);
		return (0);
	}
	_count = write(STDOUT_FILENO, buffer, rd_cnt);
	free(buffer);
	if (w_count < 0)
		return (0);
	return (w_count);
}
