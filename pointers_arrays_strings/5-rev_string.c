#include "main.h"

/**
 * rev_string - reverses string.
 * @s: string
 */

void rev_string(char *s)
{
int l, i;
char e[1000];

l = i = 0;
while (s[l] != '\0')
{
e[l] = s[l];
l++;
}
l--;
while (l >= 0)
{
s[l] = e[i];
l--;
i++;
}
s[i++] = '\0';
}
