#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * copy_cont - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int copy_cont(int argc, char *argv[])
{
	int f_read, f_write, r, i, j;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	f_read = open(argv[1], O_RDONLY);
	if (f_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(f_write, buff, BUFSIZ)) > 0)
	{
		if (f_write < 0 || write(f_write, buff, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(f_read);
			exit(99);	
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	i = close(f_read);
	j = close(f_write);
	if (i < 0 || j < 0)
	{
		if (i < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_read);
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_write);
		exit(100);
	}
	return (0);
}
