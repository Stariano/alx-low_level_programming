#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * @dest : destination
 * @src : main string
 * @n : n bytes to use
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
