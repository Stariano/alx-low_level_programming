#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: string to be scanned.
 * @accept : string containing the characters to match.
 * Return: returns the number of characters.
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}


