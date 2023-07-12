#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	p = malloc((sizeof(char) * i) + 1);

	if (p == NULL)
		return (NULL);

	while (a < i)
	{
		p[a] = str[a];
		a++;
	}

	p[a] = '\0';
	return (p);
}
