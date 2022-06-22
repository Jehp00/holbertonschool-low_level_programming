#include "main.h"

/**
 * swap_int - swap the the values of two integers.
 * @a: integer.
 * @b: integer.
 */

void swap_int(int *a, int *b)
{
int sw;

sw = *a;
*a = *b;
*b = sw;
}
