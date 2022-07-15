#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_c - print a char
 * @c: char to print
 *
 * Return: void
 */

void print_c(va_list c, char *separator)
{
	printf("%s%c", separator, va_arg(c, int));
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: void
 */

void print_s(va_list s, char *separator)
{
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
		string = "(nil)";

	printf("%s%s", separator, string);
}
/**
 * print_i - prints an int
 * @i: int to print
 *
 * Return: void
 */

void print_i(va_list i, char *s)
{
	printf("%s%d", s, va_arg(i, int));
}

/**
 * print_f - prints a float
 * @f: float to print
 *
 * Return: void
 */

void print_f(va_list f, char *separator)
{
	printf("%s%f", separator, va_arg(f, double));
}

/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int a, b;
	char *separator;
	print_t st[] = {

		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(list, format);
	separator = "";

	a = 0;
	while (format != NULL && format[a] != '\0')
	{
		b = 0;
		while (b < 4)
		{
			if (format[a] == *(st[b]).st)
			{
				st[b].p(list, separator);
				separator = ", ";
			}
			b++;
		}
		a++;
	}
	printf("\n");
	va_end(list);
}
