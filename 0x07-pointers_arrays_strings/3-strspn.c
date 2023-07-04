#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p, r, num, check;

	num = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		check = 0;

		for (r = 0; accept[r] != '\0'; r++)
		{
			if (accept[r] == s[p])
			{
				num++;
				check = 1;
			}
		}
		if (check == 0)
			return (num);
	}
	return (num);
}
