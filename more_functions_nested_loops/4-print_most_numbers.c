#include "main.h"

/**
 * print_most_numbers - print all numbers except 2 and 4
 * Return: 0 on success.
 */

void print_most_numbers(void)
{
int c = 0;

while (c <= 9)
{
if (c != 2 && c != 4)
{
_putchar (c + '0');

}
++c;
}
_putchar('\n');
}
