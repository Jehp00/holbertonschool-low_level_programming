#include "main.h"

/**
 * _natural - evaluate function _sqrt
 * @a: integer
 * @b:integer
 *
 * Return: the resulting square root
 */

int _natural(int a, int b)
{
if (b == 0 || b == 1)
{
return (b);
}
else if (a * a < b)
{
return (_natural(a + 1, b));
}
else if (a * a == b)
{
return (a);
}
return (-1);
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number to calculate
 *
 * Return: _natural
 */

int _sqrt_recursion(int n)
{
int e = 0;

if (e < 0)
{
return (-1);
}
else
{
return (_natural(e, n));
}
}
