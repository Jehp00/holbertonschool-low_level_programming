#include "main.h"

/**
* print_last_digit - print the last digit
* @x: number
*
* Return: the last digit
*/

int print_last_digit(int x)
{
	x %= 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');
	return (x);
}
