#include "main.h"
/**
 * read_textfile() - Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 *  Return: writereturn-number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buf;
	ssize_t read_return;
	ssize_t write_return;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (!buf)
	{
		close(fd);
		return (0);
	}
	read_return = read(fd, buf, letters);
	write_return = write(1, buf, read_return);

	free(buf);
	close(fd);
	return (write_return);
}
