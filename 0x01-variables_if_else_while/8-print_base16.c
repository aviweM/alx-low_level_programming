#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Resturn: Always 0;
 */
int main(void)
{
	int base;
	char letter;

	for (base = '0'; base <= '9'; base++)
	{
		putchar(base);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
