#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * @array: An array
 * @size: size of the array
 * @value: value to be searched for
 * Return: An index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t itr;

	if (array == NULL)
		return (-1);
	for (itr = 0; itr < size; itr++)
	{
		printf("Value checked array[%ld] = [%d]\n", itr, array[itr]);
		if (array[itr] == value)
			return (itr);
	}

	return (-1);
}
