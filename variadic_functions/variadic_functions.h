#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - print type with corresponding print function
 * @st: print type
 * @p: pointer
 */

typedef struct st
{
	char *st;
	void (*p)();
} print_t; 

#endif /*VAIADIC_FUNCTIONS_H*/
