#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int j, k;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
				return (s + j);
		}
	}

	return (NULL);
}
