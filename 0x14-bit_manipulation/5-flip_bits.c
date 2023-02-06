#include "main.h"

/**
 * countSetBits - Count how many changes need to get from a to b.
 * @n: bits using ^
 * Return: Return number of counts.
 */

int countSetBits(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n : unsigned long int
 * @m : unsigned long int
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
