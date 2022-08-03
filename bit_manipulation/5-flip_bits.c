#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 * to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a, c = 0;
	unsigned long int b = 1, d = n ^ m;

	for (a = 0; a < (sizeof(unsigned long int) * 8); a++)
	{
		if (b == (d & b))
		{
			c++;
		}
		b <<= 1;
	}
	return (c);
}
