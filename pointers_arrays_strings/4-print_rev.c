#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: String to input.
 *
 */

void print_rev(char *s)
{
int l = 0;

while (s[l] != '\0')
{
l++;
}
while (l)
{
_putchar(s[--l]);
}
_putchar('\n');
}
