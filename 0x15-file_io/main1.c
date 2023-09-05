#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "main.h"

// ssize_t read_textfile(const char *filename, size_t letters)
// {
// 	ssize_t fd;
// 	char *buf;
// 	ssize_t read_return;
// 	ssize_t write_return;

// 	if (!filename)
// 		return (0);
// 	fd = open(filename, O_RDONLY);
// 	if (fd > 0)
// 		return (0);
// 	buf = malloc(letters * sizeof(char));
// 	read_return = read(fd, buf, letters);
// 	write_return = write(1, buf, read_return);
// 	free(buf);
// 	close(fd);
// 	return (write_return);
// }

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
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





/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main()
{
    ssize_t n;

    // if (ac != 2)
    // {
    //     dprintf(2, "Usage: %s filename\n", av[0]);
    //     exit(1);
    // }
    n = read_textfile("Requiescat", 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile("Requiescat", 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}