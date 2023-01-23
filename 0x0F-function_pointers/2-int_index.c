#include "function_pointers.h"
#include <stdlib.h>

/**
  * int_index - initializes a variable
  *
  * @array: name.
  * @size: pointer.
  *@cmp: pointer.
  * Return: nothing.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int itr;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (itr = 0; itr < size; itr++)
	{
		if (cmp(array[itr]) != 0)
		{
			return (itr);
		}
	}

	return (0);
}
