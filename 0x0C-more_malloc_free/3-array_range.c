#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - make  memory for an array
 * @min: int type
 * @max: int type
 * Return:  return pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int count;

	if (max < min)
	{
		return (NULL);
	}

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	count = 0;

	while (min <= max)
	{
		ptr[count] = min;
		min++;
		count++;
	}
	return (ptr);
}
