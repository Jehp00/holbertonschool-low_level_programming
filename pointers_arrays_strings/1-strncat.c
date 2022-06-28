#include "main.h"

/**
 * _strncat - concatenates two strings but use at most n bytes from src
 * @dest: string to append to src
 * @src: string to add to dest
 * @n: most n bytes from src
 * Return: pointer string result
 */

char *_strncat(char *dest, char *src, int n)
{
int a, b;

a = b = 0;

while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0' && b < n)
{
dest[a] = src[b];
b++;
a++;
}
dest[a] = '\0';
return (dest);
}
