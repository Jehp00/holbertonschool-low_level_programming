#include "main.h"

/**
 * binary_to_uint - converts a binary to int
 * @b: pointer to binary number
 *
 * Return: unsigned int with decimal value or 0 if error
 */


unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int n = 0;

	if (!b)
	{
		return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		n <<= 1;
		if (b[a] == '1')
		{
			n += 1;
		}
	}
	return (n);
}
