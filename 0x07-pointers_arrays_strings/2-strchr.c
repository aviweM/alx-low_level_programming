#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a chracter in a string
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
			return (s + n);
	}
	return (NULL);
}
