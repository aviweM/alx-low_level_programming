#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - Frees space allocated for struct dog
  * @d: struct dog tofree
  *
  * Return: Always 0
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
