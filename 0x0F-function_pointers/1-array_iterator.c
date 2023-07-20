#include "function_pointers.h"

/**
  * array_iterator - Entry point
  * @array: array that executes a funtion
  * @size: size of an array
  * @action: Pointer to the function
  *
  * Return: ...
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
