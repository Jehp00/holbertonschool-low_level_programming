#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_c - print a char
 * @c: char to print
 *
 * Return: void
 */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: void
 */

void print_s(va_list s)
{
	char *string = va_arg(s, char*);

	if (string == NULL)
		string = "(nil)";

	printf("%s", string);
}
/**
 * print_i - prints an int
 * @i: int to print
 *
 * Return: void
 */

void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - prints a float
 * @f: float to print
 *
 * Return: void
 */

void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int a, b;
	print_t p[] = {

		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list list;
	char *separator;

	va_start(list, format);
	a = 0;
	while (format && format[a])
	{
		b = 0;
		while (p[b].t != NULL)
		{
			if (*(p[b].t) == format[a])
			{
				printf("%s", separator);
				p[b].f(list);
				separator = ", ";
				break;
			}
			b++;
		}
		a++;
	}
	va_end(list);
	printf("\n");
}
