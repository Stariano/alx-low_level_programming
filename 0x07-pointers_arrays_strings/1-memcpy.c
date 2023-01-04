#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - A function that copies memory area.
 * @dest: The destination where memory is allocated.
 * @src : main bytes from memory area to be copied from.
 * @n: constant byte.
 * Return: Return the new string.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
