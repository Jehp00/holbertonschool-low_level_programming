#include "main.h"

/**
 * more_numbers - print all numbers of 0 thought 14, 10 times
 * Return: 0 on success.
 */
void more_numbers(void)
{
int c, i;

i = c = 0;
while (i < 10)
{
while (c <= 14)
{
if (c >= 10)
{
_putchar(c / 10 + '0');

}
_putchar(c % 10 + '0');
++c;
}
_putchar('\n');
c = 0;
i++;
}
}


