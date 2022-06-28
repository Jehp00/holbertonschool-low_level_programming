#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
int d, b, c;

d = 0;
b = n - 1;

while (d < n / 2)
{
c = a[d];
a[d] = a[b];
a[b--] = c;
d++;
}
}
