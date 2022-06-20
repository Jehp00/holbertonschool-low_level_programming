#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if the character is uppercase.
 * @c: letter
 *
 * Return: 1 if c es uppercase, 0 if not.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
