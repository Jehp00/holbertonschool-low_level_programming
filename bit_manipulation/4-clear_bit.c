#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * at a given index
 * @n: number
 * @index: index to set a bit
 *
 * Return: 1 if works, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	a = ~(1 << index);
	*n = *n & a;
	return (1);
}
