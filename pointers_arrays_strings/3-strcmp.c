#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
int c = 0;

int b = 15;
int d = -15;
while (s2[c] != '\0')
{
if (s2[c] > s1[c])
{
return (d);
}
else if (s2[c] < s1[c])
{
return (b);
}
else
{
return (0);
}
c++;
}
return (0);
}
