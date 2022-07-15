#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 *@separator: string to be printed between numbers
 *@n:  number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l_num;
	int r;
	unsigned int a;

	va_start(l_num, n);

	a = 0;
	while (a < n)
	{
		r = va_arg(l_num, int);

		printf("%d", r);
		if (a < n - 1 && (separator != NULL))
			printf("%s", separator);

		a++;
	}

	printf("\n");

	va_end(l_num);
}
