#include "function_pointers.h"
#include <stdlib.h>

/**
  * array_iterator - initializes a variable
  *
  * @array: name.
  * @size: pointer.
  *@action: pointer.
  * Return: nothing.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t itr;

	if (array == NULL || size <= 0 || action == NULL)
	{
		return;
	}

	for (itr = 0; itr < size; itr++)
		action((array[itr]));
}
