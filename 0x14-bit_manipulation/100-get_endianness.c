#include "main.h"

/**
 * get_endianness - Checks if a machine is a small or big endian
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned int p = 1;
	char *c = (char *) &p;

	return (*c);
}
