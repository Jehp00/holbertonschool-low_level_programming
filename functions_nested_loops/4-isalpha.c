#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: character to be checked.
 * Return: 1 if the character is a letter, lowercase or uppercase.
 * 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
