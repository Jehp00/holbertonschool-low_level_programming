#include <stdio.h>

/**
 * main - prints _putchar.
 * Return: Always 0
 */

int main(void)
{
	char word[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		putchar(word[i]);
	putchar('\n');

	return (0);
}
