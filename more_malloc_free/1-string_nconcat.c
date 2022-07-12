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
unsigned int b, c, j;
if (s1 == NULL)
{
b = 0;
}
else
{
for (b = 0; s1[b]; b++)
;
}
if (s2 == NULL)
{
c = 0;
}
else
{
for (c = 0; s2[c]; c++)
;
}
if (c >  n)
{
c = n;
}
a = malloc(sizeof(char) * (b + c + 1));
if (a == NULL)
{
return (NULL);
}
for (j = 0; j < b; j++)
{
a[j] = s1[j];
}
for (j = 0; j < c; j++)
{
a[j + b] = s2[j];
}
a[b + c] = '\0';
return (a);
}
