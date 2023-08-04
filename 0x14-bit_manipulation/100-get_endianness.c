#include "main.h"

/**
 * get_endianness - Checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *checker = (char *) &k;

	return (*checker);
}
