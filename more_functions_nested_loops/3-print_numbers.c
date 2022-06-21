#include "main.h"

/**
 * print_numbers - prints the number 0 thought 9.
 */

void print_numbers(void)
{
int n = 0;

while (n <= 9)
{
_putchar(n + '0');
++n;
}
_putchar('\n');
}
