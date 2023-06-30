#include "main.h"
#include <stdio.h>

/**
 * _strcat - Appends two strings, overwriting and terminating null byte
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int result = 0, k;

	while (dest[result])
	{
		result++;
	}

	for (k = 0; src[k] != 0; k++)
	{
		dest[result] = src[k];
		result++;
	}

	dest[result] = '\0';
	return (dest);
}
