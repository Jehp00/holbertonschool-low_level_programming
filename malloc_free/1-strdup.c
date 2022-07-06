#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
char *a;
unsigned int b, l;

b = 0;
l = 0;

if (str == NULL)
{
return (NULL);
}


while (str[l])
{
l++;
}
a = malloc(sizeof(char) * (l + 1));

if (a == NULL)
{
return (NULL);
}
while ((a[b] = str[b]) != '\0')
{
b++;
}
return (a);
}
