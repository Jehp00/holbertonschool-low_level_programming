#include <stdio.h>
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

/**
 * main - multiplies tow numbers/integers
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int numI, numII, r;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
numI = _atoi(argv[1]);
numII = _atoi(argv[2]);
r = numI *numII;
printf("%d\n", r);

return (0);
}
