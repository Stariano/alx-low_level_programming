#include <stdio.h>

/**
 * clear_bit - set value to 1 with given index
 * @n:pointer to unsigned int
 * @index: unsigned int index
 * Return: 1 if succes -1 in case of error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);

	int mask = 1 << index;
	*n = *n & ~mask;

	return (1);
}
