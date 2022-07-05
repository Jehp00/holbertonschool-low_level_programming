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
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
int s, num, a, b, c;

s = 0;

for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (argv[a][b] > '9' || argv[a][b] < '0')
{
puts("Error");
return (1);
}
}
}
for (c = 1; c < argc; c++)
{
num = _atoi(argv[c]);
if (num >= 0)
{
s += num;
}
}
printf("%d\n", s);
return (0);
}
