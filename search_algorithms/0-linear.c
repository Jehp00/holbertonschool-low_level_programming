#include "search_algos.h"

/**
 * linear_search - Using linear search find the value
 * in an array of integers
 * @array: a pointer to the first element
 * @size: elements in th arrays
 * @value: this is the value to search
 * Return: If value is not present in array or if array is NULL
 * your function must return -1, other case, the first index
 * with the value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
		{
			return (a);
		}
	}
	return (-1);
}
