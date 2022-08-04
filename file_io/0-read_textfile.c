#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lean_read, lean_write;
	int f;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(f);
		return (0);
	}
	lean_read = read(f, buff, letters);
	close(f);
	if (lean_read == -1)
	{
		free(buff);
		return (0);
	}
	lean_write = write(STDOUT_FILENO, buff, lean_read);
	free(buff);
	if (lean_read != lean_write)
	{
		return (0);
	}
	return (lean_write);
}
