#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
int num, a, r;
int cents[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);
r = 0;

if (num < 0)
{
printf("0\n");
return (0);
}

for (a = 0; a < 5 && num >= 0; a++)
{
while (num >= cents[a])
{
r++;
num -= cents[a];
}
}
printf("%d\n", r);
return (0);
}
