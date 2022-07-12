#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *a;
unsigned int b = 0, j = 0, l = 0, l2 = 0;
while (s1 && s1[l])
{
l++;
}
while (s2 && s2[l2])
{
l2++;
}
if (n < l2)
{
a = malloc(sizeof(char) * (l + n + 1));
}
else
{
a = malloc(sizeof(char) * (l + l2 + n));
}

while (b < l)
{
a[b] = s1[b];
b++;
}
while (n < l2 && b < (l + n))
{
a[b++] = s2[j++];
}
while (n >= l2 && b < (l + n))
{
a[b++] = s2[j++];
}

a[b] = '\0';
return (a);
}
