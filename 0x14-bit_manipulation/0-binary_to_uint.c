#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: string containing the binary number 
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int h;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (h = 0; b[h]; h++)
	{
		if (b[h] < '0' || b[h] > '1')
			return (0);
		value = 2 * value + (b[h] - '0');
	}

	return (value);
}
