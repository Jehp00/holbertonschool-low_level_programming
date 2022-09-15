#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a
 * sorted array of integer using the Interpolation
 * search
 * @array: pointer to the first element of the array to search
 * @size: number of elements of the array
 * @value: value to search for
 * Return: the first index where value is located, or -1 on failure
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t a, b, c;

	if (array == NULL && size <= 0)
	{
		return (-1);
	}
	a = 0;
	c = size - 1;
	while (array[a] != array[c])
	{
		b = a + (((double)(c - a) / (array[c] - array[a])) * (value - array[a]));
		if (b < a || b > c)
		{
			printf("Value checked array[%lu] is out of range\n", b);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		if (array[b] < value)
		{
			a = b + 1;
		}
		else if (array[b] > value)
		{
			c = b - 1;
		}
		else
			return (b);
	}
	return (-1);
}
