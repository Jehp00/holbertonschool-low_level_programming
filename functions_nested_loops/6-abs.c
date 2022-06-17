#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @c: integer
 *
 * Return: absolute value of an integer.
 */

int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	return (c);
}
