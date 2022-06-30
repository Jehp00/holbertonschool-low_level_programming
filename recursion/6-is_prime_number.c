#include "main.h"

/**
 * _prime - recursion loop
 * @n: num
 * @i: number to iterate
 * Return: return 1 or 0
 */

int _prime(int n, int i)
{
if (i == n - 1)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
if (n % i != 0)
{
return (_prime(n, i + 1));
}
return (0);
}

/**
 * is_prime_number - evaluate prime or not
 * @n: number
 * Return: return 1 prime - return 0 otherwise
 */

int is_prime_number(int n)
{
int i = 2;

if (n < 2)
{
return (0);
}
if (n == 2)
{
return (1);
}
return (_prime(n, i));
}
