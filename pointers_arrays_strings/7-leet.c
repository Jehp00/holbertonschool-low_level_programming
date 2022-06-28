#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
int e, o;

char *a = "aAeEoOtTlL";
char *b = "4433007711";

for (e = 0; s[e] != '\0'; e++)
{
for (o = 0; o < 10; o++)
{
if (s[e] == a[o])
{
s[e] = b[o];
}
}
}
return (s);
}
