#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 * @dest : destination
 * @src : main string
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
return (strcat(dest, src));
}
