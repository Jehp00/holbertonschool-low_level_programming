#include "main.h"

/**
 * _memset - fills the first memory in the constant byte b
 * @s: memory to be filled
 * @b: constant o char to copy
 * @n: times to copy the constant
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
