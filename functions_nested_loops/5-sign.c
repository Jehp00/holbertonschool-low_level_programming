#include "main.h"

/**
 * print_sign - print the sign of the numbers
 * @n: number
 *
 * Return: 1 if is +, 0 if is equal to 0 and -1 if is -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
