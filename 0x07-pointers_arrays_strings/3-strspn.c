#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: string to be scanned.
 * @accept : string containing the characters to match.
 * Return: returns the number of characters.
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

