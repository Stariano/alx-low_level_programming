#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned int
 * @index:index unsigned int
 * Return: bit at given index else -1 if error accured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitStatus;

	if (sizeof(n) * 8 < index)
		return (-1);

	bitStatus = (n >> index) & 1;
	return (bitStatus);
}
