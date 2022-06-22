#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: an input string
 * Return: Nothing
 */

void _puts(char *str)
{
int s = 0;

while (str[s] != '\0')
{
_putchar(str[s]);
s++;
}
_putchar('\n');
}
