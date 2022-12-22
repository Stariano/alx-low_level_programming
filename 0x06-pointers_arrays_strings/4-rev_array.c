#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array -  function that reverses the content of an array of integers
 * @a : array
 * @n : size of array to loop through
 */

void reverse_array(int *a, int n)
{
int i = n - 1;

for (; i >= 0; i--)
{
	printf("%d", a[i]);
	if (i != 0)
	{
		printf(", ");
	}
}
}
