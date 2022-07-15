#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameters.
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int a = 0;
	unsigned int b;
	va_list sum_n;

	va_start(sum_n, n);

	for (b = 0; b < n; b++)
		a += va_arg(sum_n, int);

	va_end(sum_n);
	return (a);
}
