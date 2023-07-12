#include "search_algos.h"



/**
 * printer - Printing function
 * @array: the array
 * @m: starting position
 * @final: finishing point
 */
void printer(int *array, int m, int final)
{
	int i;

	printf("Searching in array: ");
	for (i = m; i <= final; i++)
	{
		printf("%d", array[i]);
		if (i != final)
			printf(", ");
	}
	printf("\n");
}
/**
 * binary_search - performs binary search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int l, r, m;

	l = 0;
	r = size - 1;
	while (l <= r)
	{
		printer(array, l, r);
		m = (l + r) / 2;
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
			return (m);
	}
	return (-1);
}
