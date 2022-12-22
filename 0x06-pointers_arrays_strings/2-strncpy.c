#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - function that copies a string
 * @dest : destination
 * @src : main string
 * @n : n bytes to use
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
