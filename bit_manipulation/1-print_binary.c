#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int a, c = 0;
	unsigned long int tmp;

	for (a = 63; a >= 0; a--)
	{
		tmp = n >> a;
		if (tmp & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
		{
			_putchar('0');
		}
	}
	if (!c)
	{
		_putchar('0');
	}
}
