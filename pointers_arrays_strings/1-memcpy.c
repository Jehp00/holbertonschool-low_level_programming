#include "main.h"

/**
 * _memcpy - copy memory area.
 * @dest: destination memeory area
 * @src: memory area
 * @n: bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a = 0;

for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
