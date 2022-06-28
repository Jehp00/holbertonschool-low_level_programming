#include "main.h"

/**
 * reverse_array - reverses the string of array a
 * @n: number of elements of arrays
 * return - pointer of string
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
