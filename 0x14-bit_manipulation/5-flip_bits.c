#include "main.h"

/**
 * flip_bits - Counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, counter = 0;
	unsigned long int b_value;
	unsigned long int num = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		b_value = num >> k;
		if (b_value & 1)
			counter++;
	}

	return (counter);
}
