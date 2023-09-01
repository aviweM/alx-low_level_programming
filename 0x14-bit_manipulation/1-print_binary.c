#include "main.h"

/**
 * print_binary - Prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int k, c = 0;
	unsigned long int value;

	for (k = 63; k >= 0; k--)
	{
		value = n >> k;

		if (value & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
