#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_memset - function fills the first n bytes of the memory area.
 *@s: Returns a pointer to the memory area.
 *@n: bytes of the memory area pointed to by s.
 *@b: constant byte.
 *Return: String after being changed
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
