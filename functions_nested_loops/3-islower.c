#include "main.h"

/**
 * _islower - check if is lowercase
 * @c: character to test
 * Return: 1 if is lowercase, 0 if is not lowercase.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);

}
