#include "main.h"

/**
 * main - prints _putchar.
 * Return: Always 0
 */

int main(void)
{
	char word[9] = "_putchar\n";
	int i;

	for (i = 0; i < 10; i++)
		_putchar(word[i]);

	return (0);
}
