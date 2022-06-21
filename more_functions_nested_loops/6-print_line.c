#include "main.h"

/**
 * print_line - print the character _ until make a line.
 * @n: number of times that _ prints.
 * Return: Always 0.
 */

void print_line(int n)
{
int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}

