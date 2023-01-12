#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - A function that locates a character in a string.
 * @s: Main string.
 * @c : character to be searched for.
 * Return: Return C
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
