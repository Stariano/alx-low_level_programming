/**
 * print_rev - function that prints a string, in reverse, followed by a new.
 * @s: The string.
 */

#include <string.h>
#include <stdio.h>
#include "main.h"

void print_rev(char *s)
{
	int fcounter = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fcounter++;
	}

	for (n = (fcounter - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
