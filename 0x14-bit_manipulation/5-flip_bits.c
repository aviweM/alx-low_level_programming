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
	int k, sum = 0;
	unsigned long int bit_value;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		bit_value = exclusive >> k;
		if (bit_value & 1)
			sum++;
	}

	return (sum);
}
