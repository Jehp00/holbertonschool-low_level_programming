#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
int a, b, c, l, g, d;
a = 0;
b = 0;
c = 0;
l = 0;
g = 0;
d = 0;
while (s[l] != '\0')
l++;
while (a < l && g == 0)
{
if (s[a] == '-')
{
++b;
}
if (s[a] >= '0' && s[a] <= '9')
{
d = s[a] - '0';
if (b % 2)
{
d = -d;
}
c = c * 10 + d;
g = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
{
break;
}
g = 0;
}
a++;
}
if (g == 0)
{
return (0);
}
return (c);
}
