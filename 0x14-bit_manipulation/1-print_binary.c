#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int k, counter = 0;
	unsigned long int value;

	for (k = 63; k >= 0; k--)
	{
		value = n >> k;

		if (value & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
