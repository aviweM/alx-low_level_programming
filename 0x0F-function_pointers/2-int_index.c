#include "function_pointers.h"

/**
  * int_index - ...
  * @array: ...
  * @size: ...
  * @cmp: ...
  *
  * Return: ...
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (b < size)
			{
				if (cmp(array[b]))
					return (b);

				b++;
			}
		}
	}

	return (-1);
}
