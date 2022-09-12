#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to thw first element of the array
 * @size: the numbers of elements in the array
 * @value: value to search
 * Return: If value is not present in array or if array is NULL,
 * your function must return -1, if there is a value return
 * the index
 */

int binary_search(int *array, size_t size, int value)
{
	size_t a, l, r;

	if (array == NULL)
	{
		return (-1);
	}
	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (a = l; a < r; a++)
		{
			printf("%d, ", array[a]);
		}
		printf("%d\n", array[a]);

		a = l + (r - l) / 2;
		if (array[a] == value)
			return (a);
		if (array[a] > value)
			r = a - 1;
		else
			l = a + 1;
	}
	return (-1);
}
