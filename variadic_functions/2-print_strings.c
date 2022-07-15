#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator to print between the strings
 * @n: number of strings to print
 *
 * Return: void
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *s;
	va_list list_names;

	va_start(list_names, n);
	for (a = 0; a < n; a++)
	{
		s = va_arg(list_names, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (a < n - 1 && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list_names);
}
