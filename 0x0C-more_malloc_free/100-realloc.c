#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - Entry point
  * @ptr: address of the memory
  * @old_size: size of allocated space in ptr
  * @new_size: newsiz of the new memory block
  *
  *
  * Return: ...
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		np = malloc(new_size);

		if (np == NULL)
			return (NULL);

		return (np);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	np = malloc(new_size);

	if (np == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		np[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (np);
}
