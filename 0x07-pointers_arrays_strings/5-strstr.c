#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - A function that locates a substring.
 * @haystack: string to be scanned.
 * @needle : string containing the substring to match.
 * Return:  a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}



