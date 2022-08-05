#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * checker_97 - checks for the corret number of the arguments
 * @argc: number of arguments
 *
 * Return: void
 */

void checker_97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * checker_98 - checks the file_from exists and can be read
 * @check: checks if is true or false
 * @file: file_from's name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: void
 */

void checker_98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * checker_99 - checks that file_to was create and can be written
 * @check: chescks if id true or false
 * @file: file_to's name
 * @fd_from: file descriptor or -1
 * @fd_to: file descriptor or -1
 *
 * Return: void
 */

void checker_99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * checker_100 - checks that file descriptors were closed properly
 * @check: checks if true or false
 * @fd: file descriptor
 *
 * Return: void
 */

void checker_100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
		
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t l_read, l_write;
	char buff[1024];
	mode_t file_perm;

	checker_97(argc);
	fd_from = open(argv[1], O_RDONLY);
	checker_98((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	checker_99((ssize_t)fd_to, argv[2], fd_from, -1);
	l_read = 1024;
	while (l_read == 1024)
	{
		l_read = read(fd_from, buff, 1024);
		checker_98(l_read, argv[1], fd_from, fd_to);
		l_write = write(fd_to, buff, l_read);
		if (l_write != l_read)
			l_write = -1;
		checker_99(l_write, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	checker_100(close_to, fd_to);
	checker_100(close_from, fd_from);
	return (0);
}
