#include <stdio.h>
#include "main.h"

/**
 * main - Prints the largest prime factor of number 612852475143
 * Return: Always 0 (Success)
 */

int main(void)
{
	long x, maxF;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			maxF = number / x;
		}
	}
	printf("%ld\n", maxF);
	return (0);
}
