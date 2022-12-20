/**
 * print_rev - function that prints a string, in reverse, followed by a new.
 * @s: The string.
 */

#include <string.h>
#include <stdio.h>
#include "main.h"

void print_rev(char *s)
{
int len = strlen(s);
int i;

if (len <= 1)
{
	_putchar(s);
}
else
{
for (i = len; i >= 0; i--)
{
_putchar(s[i]);
}
}
}
