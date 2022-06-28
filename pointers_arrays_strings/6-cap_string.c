#include "main.h"

/**
 * cap_string - capitalizes everey word of the string
 * @str: string to capital
 * Return: the string changed
 */

char *cap_string(char *str)
{
int a, b;

char x[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
'"', '(', ')', '{', '}'};

for (a = 0; str[a] != '\0'; a++)
{
if (a == 0 && str[a] >= 'a' && str[a] <= 'z')
{
str[a] -= 32;
}
for (b = 0; b < 13; b++)
{
if (str[a] == x[b])
{
if (str[a + 1] >= 'a' && str[a + 1] <= 'z')
{
str[a + 1] -= 32;
}
}
}
}
return (str);
}
