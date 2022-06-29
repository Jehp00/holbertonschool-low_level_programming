#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
int e;

unsigned int add, add2;

add = 0;
add2 = 0;

for (e = 0; e < size; e++)
{
add += a[(size * e) + e];
add2 += a[(size * (e + 1)) - (e + 1)];
}
printf("%d, %d\n", add, add2);
}
