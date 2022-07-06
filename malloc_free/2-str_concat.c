#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
char *a;
unsigned int b, c, l, l2;
b = 0;
c = 0;
l = 0;
l2 = 0;
while (s1 && s1[l])
{
l++;
}
while (s2 && s2[l2])
{
l2++;
}
a = malloc(sizeof(char) * (l + l2 + 1));
if (s2 == NULL)
{
return (NULL);
}
if (s1)
{
while (b < l)
a[b] = s1[b];
b++;
}
if (s2)
{
while (b < (l + l2))
{
a[b] = s2[c];
b++;
c++;
}
}
a[b] = '\0';
return (a);
}
