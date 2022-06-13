#include <stdio.h>

/**
 * main - print the size of a date
 *
 * Return: Always 0
 */

int main(void)
{
	printf("Size of a char: %zu", sizeof(char));
	printf("Size of an int: %zu", sizeof(int));
	printf("Size of an long int: %zu", sizeof(long int));
	printf("Size of an long long int: %zu", sizeof(long long int));
	printf("Size of an float: %zu", sizeof(float));
	return (0);
}
