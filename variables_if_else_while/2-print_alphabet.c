#include <stdio.h>

/**
 * main - prints the alphabet with putchar.
 *
 * Return: 0 on success
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
